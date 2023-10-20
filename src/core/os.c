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
        // get input
        char input[256];
        scanf("%s", input); // TODO: use keyboard input instead of scanf

        // execute input
        if (strcmp(input, "exit") == 0) {
            break;
        }
        else if (strcmp(input, "help") == 0) {
            printf("Commands:\n");
            printf("exit: exit the terminal\n");
            printf("help: show this help message\n");
        }
        else {
            printf("Unknown command: %s\n", input);
        }
    }
}

#endif