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

    // write_string_at("Dhoni finishes in Style!", 25, 8, 0);
    // write_string_at("India lifts the World Cup after 28 years!", 43, 16, 0);

    write_string("Bloody Sweet!", 13);
    write_char('\n');
    write_string("Name?", 5);
    write_char('\f');
    write_string("Nishanth", 8);
    write_face();

    // terminal();
    return 0;
}

#endif