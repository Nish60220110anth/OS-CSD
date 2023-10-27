/**
 * OS: Operating System which can execute the a terminal based user program
 *
*/

#ifndef OS_H
#define OS_H

#include <stdint.h>
#include <stdbool.h>

#include "global.h"
#include "register.c"
#include "init.c"

#include "../faces/face_0.h"
#include "../faces/face_1.h"
#include "../faces/face_2.h"

#include "../driver/keyboard_driver.c"
#include "../driver/display_driver.c"

/**
 * Start the OS
*/

void os_start() {
    // initialize the kernel
    minit();
}

// function to capture data from memory and update the display
void terminal() {
    // init_memory();
    clear_screen();
    while (true) {
        // get input from keyboard
        char input = keyboard_get_input();
        printf("got input: %c\n", input);

        write_char(input);
    }
}

void display_test() {
    clear_screen();
    write_string("Team RISC V1\n\n\n", 16);
    write_string_at("Welcome to Flex OS\n\n", 20, 24, 0);

    set_cursor_pos(32, 0);
    write_char('\n');
    write_string("Namo 2024!\n\n", 12);
    write_string("India lifts the World Cup after 28 years!", 42);

    int val[2];

    write_char('\n');
    write_face(font_2);

    get_cursor_pos(val);

    int line = val[0];
    int col = val[1];

    write_string_at("Hindu", 5, line - 104, col + 20);
    write_string_at_col("Bharat", 6, line - 112, col + 35);

    get_cursor_pos(val);
    line = val[0];

    set_cursor_pos(line - 8, 0);

    write_char('\n');
    write_face(font_0);
    write_char('\n');
    write_face(font_1);
    write_char('\n');

    write_string("Kakkos: \f", 9);
    get_cursor_pos(val);
    line = val[0];
    write_char('\r');
    write_zero_line(line);
    write_string("CS 342", 6);
    write_char(CTRL_CODE_BACKSPACE);

    write_char('\t');
    write_string("After Tah", 9);

    // display_down();
    // display_down();
    // display_down();
    display_up();
}



int main() {
    os_start();
    // display_test();
    terminal();
    return 0;
}

#endif