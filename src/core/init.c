/**
 * Initialize the kernel.
*/

#ifndef INIT_H
#define INIT_H

#include <stdint.h>
#include <stdbool.h>

#include "global.c"
#include "memory.c"
#include "register.c"

/**
 * \brief Initializes the kernel.
*/
void init() {
    // Initialize memory
    memory_init(memory, MEM_SIZE);

    // Initialize registers
    register_init();
}

#endif