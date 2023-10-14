/**
 * \brief Memory module consists of functions for memory management.
 * Functiolaity includes memory initialization, copying, setting, allocation and freeing.
*/

#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>
#include <stdbool.h>

#include "global.c"

char* memory[MEM_SIZE];

/**
 * \brief Initializes memory.
 * \param mem Pointer to memory.
 * \param size Size of memory.
*/
void memory_init(uint8_t* mem, uint16_t size) {
    for (uint16_t i = 0; i < size; i++) {
        mem[i] = 0;
    }
}

/**
 * \brief Copies memory.
 * \param dest Destination memory.
 * \param src Source memory.
 * \param size Size of memory.
*/
void memory_copy(uint8_t* dest, uint8_t* src, uint16_t size) {
    for (uint16_t i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}


#endif // MEMORY_H