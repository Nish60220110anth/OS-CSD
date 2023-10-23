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
 * display_base = 0
 * display_start = 0
 * display_size = 65536 lines (size of display io in bits map divided by 8)
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


// 52 kilo bytes of memory 
#define DISPLAY_BASE 0
#define DISPLAY_SIZE 25600
#define DISPLAY_START 0
#define FONTMAP_SIZE 2048
#define FONTMAP_START 25601

#define ROW_CHAR_SIZE 160
#define COLUMN_CHAR_SIZE 20
#define SCREEN_LOCK 0

// to store the contents of display during focus mode
#define TEMP_SIZE 25600 
#define TEMP_START 27650

// #define DEV 

#ifndef DEV
#define TOTAL_SIZE DISPLAY_SIZE+FONTMAP_SIZE+TEMP_SIZE
#else
#define TOTAL_SIZE 10
#endif

#include "core/memory.h"
#include "core/global.h"
#include "driver/keyboard_driver.c"

char memory[TOTAL_SIZE + 1];

const int max_com_len = 10; // max command length 

// current path in the OS
char path[128];

char font_map[128][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0000 (nul)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0001
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0002
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0003
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0004
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0005
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0006
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0007
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0008
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0009
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0010
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0011
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0012
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0013
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0014
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0015
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0016
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0017
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0018
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0019
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0020 (space)
    {0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00}, // U+0021 (!)
    {0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0022 (")
    {0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00}, // U+0023 (#)
    {0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00}, // U+0024 ($)
    {0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00}, // U+0025 (%)
    {0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00}, // U+0026 (&)
    {0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0027 (')
    {0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00}, // U+0028 (()
    {0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00}, // U+0029 ())
    {0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00}, // U+002A (*)
    {0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00}, // U+002B (+)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+002C (,)
    {0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00}, // U+002D (-)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+002E (.)
    {0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00}, // U+002F (/)
    {0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00}, // U+0030 (0)
    {0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00}, // U+0031 (1)
    {0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00}, // U+0032 (2)
    {0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00}, // U+0033 (3)
    {0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00}, // U+0034 (4)
    {0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00}, // U+0035 (5)
    {0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00}, // U+0036 (6)
    {0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00}, // U+0037 (7)
    {0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00}, // U+0038 (8)
    {0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00}, // U+0039 (9)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+003A (:)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+003B (;)
    {0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00}, // U+003C (<)
    {0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00}, // U+003D (=)
    {0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00}, // U+003E (>)
    {0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00}, // U+003F (?)
    {0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00}, // U+0040 (@)
    {0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00}, // U+0041 (A)
    {0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00}, // U+0042 (B)
    {0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00}, // U+0043 (C)
    {0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00}, // U+0044 (D)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00}, // U+0045 (E)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00}, // U+0046 (F)
    {0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00}, // U+0047 (G)
    {0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00}, // U+0048 (H)
    {0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0049 (I)
    {0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00}, // U+004A (J)
    {0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00}, // U+004B (K)
    {0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00}, // U+004C (L)
    {0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00}, // U+004D (M)
    {0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00}, // U+004E (N)
    {0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00}, // U+004F (O)
    {0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00}, // U+0050 (P)
    {0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00}, // U+0051 (Q)
    {0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00}, // U+0052 (R)
    {0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00}, // U+0053 (S)
    {0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0054 (T)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00}, // U+0055 (U)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0056 (V)
    {0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00}, // U+0057 (W)
    {0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00}, // U+0058 (X)
    {0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00}, // U+0059 (Y)
    {0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00}, // U+005A (Z)
    {0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00}, // U+005B ([)
    {0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00}, // U+005C (\)
    {0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00}, // U+005D (])
    {0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00}, // U+005E (^)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF}, // U+005F (_)
    {0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0060 (`)
    {0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00}, // U+0061 (a)
    {0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00}, // U+0062 (b)
    {0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00}, // U+0063 (c)
    {0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00}, // U+0064 (d)
    {0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00}, // U+0065 (e)
    {0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00}, // U+0066 (f)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0067 (g)
    {0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00}, // U+0068 (h)
    {0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0069 (i)
    {0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E}, // U+006A (j)
    {0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00}, // U+006B (k)
    {0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+006C (l)
    {0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00}, // U+006D (m)
    {0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00}, // U+006E (n)
    {0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00}, // U+006F (o)
    {0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F}, // U+0070 (p)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78}, // U+0071 (q)
    {0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00}, // U+0072 (r)
    {0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00}, // U+0073 (s)
    {0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00}, // U+0074 (t)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00}, // U+0075 (u)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0076 (v)
    {0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00}, // U+0077 (w)
    {0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00}, // U+0078 (x)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0079 (y)
    {0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00}, // U+007A (z)
    {0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00}, // U+007B ({)
    {0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00}, // U+007C (|)
    {0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00}, // U+007D (})
    {0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+007E (~)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // U+007F
};

/**
 * @brief Logfile is not part of the OS.It is just for local debugging purpose.
 * @note open the file in append mode
*/
FILE* logfile;

#define LOG(x) fprintf(logfile,x)

/**
 * @brief Line value decides where the program can write.
 * @note As each character takes 8 bytes vertically, the value of line must always
 * be a multiple of 8.
 * Similar to ROW
*/
int LINE = 0;

/**
 * @brief Column value decides where the program can write.
*/
int COLUMN = 0;

// prototypes
int write_char(char c);
int write_char_at(char c, int line, int col);

/**
 * @brief write string array in to the display location currently at.
 * @returns returns 0 on success, otherwise failure. Failure occurs when the fontmap doesn't exist
 * @note supports word wrapping
*/
int write_string(char* msg, int len) {
    int g = 0;
    for (int i = 0;i < len;i++) {
        g = write_char(msg[i]);
        if (g != 0) {
            return g;
        }
    }
    return 0;
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

        int A = DISPLAY_BASE + ROW_CHAR_SIZE * LINE + COLUMN; // location of the first character in the line
        for (int i = 0;i < 7;i++) {
            mwrite(A + ROW_CHAR_SIZE * i, font[i]);
        }

        COLUMN++;
        if (COLUMN == ROW_CHAR_SIZE) { // if the line is full
            COLUMN = 0;
            LINE += 8;
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
        char font[8];
        for (int i = 0;i < 8;i++) {
            font[i] = font_map[c][i];
        }

        int A = DISPLAY_BASE + ROW_CHAR_SIZE * line + col; // location of the first character in the line
        for (int i = 0;i < 7;i++) {
            mwrite(A + ROW_CHAR_SIZE * i, font[i]);
        }
    }

    return 1;
}


/**
 * \brief Shifts the entire display map by one 1 unit upwards
*/
int display_up() {
    if (SCREEN_LOCK == 0) {
        int A = DISPLAY_BASE + ROW_CHAR_SIZE * LINE + COLUMN;
        for (int i = 0;i < DISPLAY_SIZE - ROW_CHAR_SIZE * 8;i++) {
            char temp = mread_char(A + i + ROW_CHAR_SIZE * 8);
            mwrite(A + i, temp);
        }

        for (int i = DISPLAY_SIZE - ROW_CHAR_SIZE * 8;i < DISPLAY_SIZE;i++) {
            mwrite(A + i, 0);
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
        int A = DISPLAY_BASE + ROW_CHAR_SIZE * LINE + COLUMN;
        for (int i = DISPLAY_SIZE - ROW_CHAR_SIZE * 8;i > 0;i--) {
            char temp = mread_char(A + i - ROW_CHAR_SIZE * 8);
            mwrite(A + i, temp);
        }

        for (int i = 0;i < ROW_CHAR_SIZE * 8;i++) {
            mwrite(A + i, 0);
        }

        return 0;
    }

    return 1;
}

// reset the entire display
void clear_screen() {
    for (int i = 0;i < DISPLAY_SIZE;i++) {
        mwrite(DISPLAY_BASE + i, 0);
    }
}

/**
 * \brief Display
*/
int display_terminal() {
    clear_screen();
    return 0;
}

// @brief: display info panel during focus mode (as seen in vim)
// enable vim like functionality
// store all the present content and show vim like functionality
int focus_info_panel() {
    if (SCREEN_LOCK == 0) {
        save_screen();

        // display vim
        int start = DISPLAY_BASE + DISPLAY_START;
        int end = DISPLAY_BASE + DISPLAY_START + DISPLAY_SIZE;

        clear_screen(); // clear the screen

        // display vim editor on first line 
        // display empty lines on the rest of the screen
        // on the last line, show info panel like vim

        char first_line_content[COLUMN_CHAR_SIZE] = "VIM";
        write_string_at(first_line_content, COLUMN_CHAR_SIZE, 0, 0);

        char last_line_content[COLUMN_CHAR_SIZE] = "INFO PANEL";
        write_string_at(last_line_content, COLUMN_CHAR_SIZE, 8 * ROW_CHAR_SIZE - 8, 0);

        // start reading input from keyboard and display what is typed on the screen
        // read until users types enter

        int v_mode = 0; // visual mode
        int i_mode = 0; // insert mode
        int r_mode = 1; // read mode

        while (true) {
            struct keyboard_driver_input event = keyboard_driver_get_input();

            if (isEscape(event)) {
                int pre_len = 0;

                char command[max_com_len];

                for (int i = 0;i < max_com_len;i++) {
                    command[i] = 0;

                    struct keyboard_driver_input input;
                    input = keyboard_driver_get_input();

                    if (input.secondary_input == CTRL_CODE_ENTER) {
                        break; // execute command
                    }
                    else {
                        input = manipulate_input(input); // manipulate the input. ex SHIFT + a --> A

                        command[i] = input.secondary_input;
                        pre_len++;
                    }
                }

                // execute the command

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

                if (strcmp(command, "q") == 0) {
                    retrieve_screen();

                }
                else if (strcmp(command, "w") == 0) {
                    i_mode = 1;
                    // save the file
                }
                else if (strcmp(command, "wq") == 0) {
                    // save and exit
                }
                else if (strcmp(command, "x") == 0) {
                    // save and exit
                }
                else if (strcmp(command, "i") == 0) {
                    // insert mode
                }
                else if (strcmp(command, "v") == 0) {
                    // visual mode
                }
                else if (strcmp(command, "r") == 0) {
                    // read mode
                }
                else {
                    // invalid command
                }
            }
        }
    }
    return 0;
}

// @brief: display functionality similar to vi
int display_focus_mode() {

    return 0;
}

// save only the visible content of the display while switching to focus mode
// location --> (DISPLAY_BASE + TEMP_START)
int save_screen() {

    return 0;
}

// retrieve the saved screen from the memory after exiting focus mode
// location --> (DISPLAY_BASE + TEMP_START) to (DISPLAY_BASE + TEMP_START + TEMP_SIZE)
int retrieve_screen() {

    // call clear_stored() after exiting focus mode
    return 0;
}


// clear the backup data stored in ((DISPLAY_BASE + TEMP_START) to (DISPLAY_BASE + TEMP_START + TEMP_SIZE))
// will be called by retrieve_screen() 
int clear_stored() {
    return 0;
}

int set_fontmap(char* filename, int len) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        return 1;
    }

    // TODO: check if the file is valid and set the fontmap accordingly
    return 0;
}

void init_log_file() {
}

// 
void init_memory() {
    for (int i = 0;i < TOTAL_SIZE;i++) {
        memory[i] = 0;
    }
}

// 
void save_memory(char* filename, int len) {
    FILE* file = fopen(filename, "w");
    for (int i = 0;i < TOTAL_SIZE;i++) {
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