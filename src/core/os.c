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
#include "driver/keyboard_driver.c"
#include "driver/display_driver.c"

/**
 * Start the OS
*/

void os_start() {
    // initialize the kernel
    init();
}

void terminal() {
    // terminal
    while (true) {
        // get input from keyboard
        struct keyboard_driver_input input = keyboard_driver_get_input();
        // if the input is not zero
        if (input.secondary_input != 0) {
            // print the input
            if(input.secondary_input == '\n' || input.secondary_input == CTRL_CODE_ENTER) {
                write_char('\n');
            } else {
                write_char(input.secondary_input);
            }
        }
    }
}

#endif