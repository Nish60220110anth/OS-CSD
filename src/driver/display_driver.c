#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * 1024 X 1024 bits
 *
 * 128 (CHARS) X 64
 *
 * 128 characters row wise
 * 64 characters column wise
 *
 * IO_DISPLAY_START = 0
 * display_start = 0
 * IO_DISPLAY_SIZE = 65536 lines (size of display io in bits map divided by 8)
 * display_end = 65536
 * keyboard_start = 65537
 *
 * 128 X 64 X 8 bits = 65536 bits
 *
 * Memory size: 256 kB
 *
 *  display => 64kB
 *  fontmap => 2kB
 *  temp    => 25kB
 *
 * Fontmap:
 *  128 -> 1kilo byte
 *  256 -> 2kilo bytes
 *
 *  presently we have support for 128 ascii codes, but we have reserved other 128 for future purpose.
 *
*/

#include "core/memory.h"
#include "core/global.h"
#include "driver/keyboard_driver.c"
#include "driver/font_map.h"

#define ROW_CHAR_SIZE 128
#define COLUMN_CHAR_SIZE 64
#define SCREEN_LOCK 0x01

const int max_com_len = 10; // max command length 

// current path in the OS
char path[128];

int LINE = 0; // current line (ROW)
int COLUMN = 0; // current column

int focus_mode = 0;
int focus_mode_col = 0;

// prototypes
int write_char(char c);
int write_char_at(char c, int line, int col);

/**
 * @brief write string array in to the display location currently at.
 * @returns returns 0 on success, otherwise failure. Failure occurs when the fontmap doesn't exist
 * @note supports word wrapping
*/
int write_string(char* msg, int len) {
    if (SCREEN_LOCK == 0) {
        int g = 0;
        for (int i = 0;i < len;i++) {
            g = write_char(msg[i]);
            if (g != 0) {
                return g;
            }
        }
        return 0;
    }
}

int write_string_at(char* msg, int len, int line, int col) {
    int g = 0;
    for (int i = 0;i < len;i++) {
        g = write_char_at(msg[i], line, col);
        if (g != 0) {
            return g;
        }

        col++;
        if (col == ROW_CHAR_SIZE) {
            col = 0;
            line += 8;
        }

        if (line == 8 * COLUMN_CHAR_SIZE) {
            line = 0;
            col = 0;

            return 1;
        }
    }
    return 0;
}

/**
 * @brief write_char writes a character included in fontmap at the last location
 * @note takes care of word wrapping
 * @returns 1 if not able to write else 0
*/
int write_char(char c) {
    // use write and read from mem.c
    if (SCREEN_LOCK == 0) {
        char font[8];
        for (int i = 0;i < 8;i++) {
            font[i] = font_map[c][i];
        }

        int A = IO_DISPLAY_START + ROW_CHAR_SIZE * LINE + COLUMN; // location of the first character in the line
        for (int i = 0;i < 7;i++) {
            mwrite(A + ROW_CHAR_SIZE * i, font[i]);
        }

        COLUMN++;
        if (COLUMN == ROW_CHAR_SIZE) { // if the row is full
            COLUMN = 0;
            LINE += 8;
            return 0;
        }

        if (LINE == 8 * COLUMN_CHAR_SIZE) {// if the screen is full
            LINE = 0;
            COLUMN = 0;

            return 1;
        }
    }

    return 1;
}

int write_char_at(char c, int line, int col) {
    if (SCREEN_LOCK == 0) {

        if (line < 0 || line >= 8 * COLUMN_CHAR_SIZE) return 1;
        if (col < 0 || col >= ROW_CHAR_SIZE) return 1;

        char font[8];
        for (int i = 0;i < 8;i++) {
            font[i] = font_map[c][i];
        }

        int A = IO_DISPLAY_START + ROW_CHAR_SIZE * line + col; // location of the first character in the line
        for (int i = 0;i < 7;i++) {
            mwrite(A + ROW_CHAR_SIZE * i, font[i]);
        }

        return 0;
    }

    return 1;
}

void write_char_last_line(char c) {
    if (SCREEN_LOCK == 0) {
        int A = IO_DISPLAY_START + (COLUMN_CHAR_SIZE - 1) * 8 * ROW_CHAR_SIZE;


    }
}


/**
 * \brief Shifts the entire display map by one 1 unit upwards
*/
int display_up() {
    if (SCREEN_LOCK == 0) {
        int A = IO_DISPLAY_START;
        for (int _line = 0; _line < 8 * COLUMN_CHAR_SIZE; _line += 8) {
            for (int i = 0;i < ROW_CHAR_SIZE * 8;i++) {
                char temp = mread_char(A + i + ROW_CHAR_SIZE * 8);
                mwrite(A + i, temp);
            }
            A += ROW_CHAR_SIZE * 8;
        }

        // clear the last line (A)
        for (int i = 0;i < ROW_CHAR_SIZE * 8;i++) {
            mwrite(A + i, 0);
        }

        // update the current line
        LINE -= 8;
        if (LINE < 0) {
            LINE = 0;
        }

        return 0;
    }

    return 1;
}

/**
 * \brief Shifts the entire display map by one 1 unit downwards
 *
*/
int display_down() {
    if (SCREEN_LOCK == 0) {
        int A = IO_DISPLAY_START + ROW_CHAR_SIZE * 8 * (COLUMN_CHAR_SIZE - 1);

        for (int _line = 0; _line < 8 * COLUMN_CHAR_SIZE; _line += 8) {
            for (int i = 0;i < ROW_CHAR_SIZE * 8;i++) {
                char temp = mread_char(A - ROW_CHAR_SIZE * 8 + i);
                mwrite(A + i, temp);
            }
            A -= ROW_CHAR_SIZE * 8;
        }

        // clear the first line (A)
        for (int i = 0;i < ROW_CHAR_SIZE * 8;i++) {
            mwrite(A + i, 0);
        }

        // update the current line
        LINE += 8;
        if (LINE >= 8 * COLUMN_CHAR_SIZE) {
            LINE = 8 * COLUMN_CHAR_SIZE - 1;
        }

        return 0;
    }

    return 1;
}

// reset the entire display
void clear_screen() {
    for (int i = 0;i < IO_DISPLAY_SIZE;i++) {
        mwrite(IO_DISPLAY_START + i, 0);
    }

    LINE = 0;
    COLUMN = 0;
}

/**
 * commands supported:
 * :xx => not supported becoz we need directory structures
 *
 *
 * 1. q --> exit focus mode
 * 2. w --> save the file
 * 3. wq --> save and exit
 * 4. x --> save and exit
 * 5. i --> insert mode
 * 6. v --> visual mode
 * 7. r --> read mode
*/

// @brief: display info panel during focus mode (as seen in vim)
// enable vim like functionality
// store all the present content and show vim like functionality
int focus_info_panel() {
    if (SCREEN_LOCK == 0) {
        save_screen();
        clear_screen();
        focus_mode = 1;
        focus_mode_col = 0;

        int command_mode = 0;

        int visual_mode = 1;
        int edit_mode = 0;

        while (true) {
            struct keyboard_input input = keyboard_get_input();
            input = manipulate_input(input);

            if (command_mode == 0) {
                if (isEscape(input)) {
                    command_mode = 1;
                }

                if (visual_mode == 1) {
                    if (input.primary_input == 'i') {
                        visual_mode = 0;
                        edit_mode = 1;
                    }
                }
                else if (edit_mode == 1) {
                    // non command mode and write to the display edit screen
                    char content_to_write[4] = convert_keyinput_to_string(input);
                    for (int i = 0;i < 4;i++) {
                        if (content_to_write[i] != '\0') {
                            write_char(content_to_write[i]);
                        }
                    }
                }
            }
            else {
                // qf: exit focus mode
                // qc: exit command mode and return to visual mode
                // w: save the file
                // wq: save and exit focus mode
            }
        }
    }

    return 1;
}


// save only the visible content of the display while switching to focus mode
void save_screen() {
    int A = IO_DISPLAY_START;
    int D = TEMP_START;

    for (int i = 0;i < IO_DISPLAY_SIZE;i++) {
        char temp = mread_char(A + i);
        mwrite(D + i, temp);
    }
}

// retrieve the saved screen from the memory after exiting focus mode
void retrieve_screen() {
    int A = IO_DISPLAY_START;
    int D = TEMP_START;

    for (int i = 0;i < IO_DISPLAY_SIZE;i++) {
        char temp = mread_char(D + i);
        mwrite(A + i, temp);
    }
}

int set_fontmap(char* filename, int len) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        return 1;
    }

    // TODO: check if the file is valid and set the fontmap accordingly
    return 0;
}


void init_memory() {
    for (int i = 0;i < MEMORY_SIZE;i++) {
        mwrite(i, 0);
    }
}

void save_memory(char* filename, int len) {
    FILE* file = fopen(filename, "w");
    for (int i = 0;i < MEMORY_SIZE;i++) {
        char temp[9];

        // Initialize the temp array to 0.
        for (int j = 0; j < 8; j++) {
            temp[j] = 0;
        }

        for (int j = 0;j < 8;j++) {
            if ((memory[i] >> j) & 1) {
                temp[7 - j] = '1';
            }
            else {
                temp[7 - j] = '0';
            }
        }

        fwrite(temp, sizeof(char), strlen(temp), file);
        char* newline = "\n";
        fwrite(newline, sizeof(char), strlen(newline), file);
    }

    fclose(file);
}

int main()
{
    init_memory();
    char* mem_file = "some.txt";
    save_memory(mem_file, sizeof(mem_file));
    return 0;
}