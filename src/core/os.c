/**
 * OS: Operating System which can execute the a terminal based user program
 *
*/

#ifndef OS_H
#define OS_H

#include <stdint.h>
#include <stdbool.h>

#include "global.h"
#include "memory.c"
#include "register.c"

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

void terminal() {
    // terminal
    while (true) {
        // get input from keyboard
        struct keyboard_input input = keyboard_get_input();
        // if the input is not zero
        if (input.primary_input != 0) {
            // print the input
            if (input.primary_input == '\n' || input.primary_input == CTRL_CODE_ENTER) {
                write_char('\n');
            }
            else {
                write_char(input.primary_input);
            }
        }
    }
}

int main() {
    os_start();
    // write_char('1');
    // write_char('7');
    // write_char_at('7', 0, 0);

    write_string("\nTeam RISC V1\n\n\n", 16);
    write_string_at("Welcome to Flex OS\n\n", 20, 24, 0);

    set_cursor_pos(32, 0);
    write_char('\n');
    write_string("Namo 2024!\n\n", 12);
    write_string("India lifts the World Cup after 28 years!", 42);

    write_char('\n');
    write_face(font_2);
    write_char('\n');
    write_face(font_0);
    write_char('\n');
    write_face(font_1);
    write_char('\n');

    write_char('a');
    write_char(CTRL_CODE_BACKSPACE);
    write_char('b');

    // terminal();
    return 0;
}

#endif