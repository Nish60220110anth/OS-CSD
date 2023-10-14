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

/**
 * \brief Sets memory.
 * \param mem Pointer to memory.
 * \param size Size of memory.
 * \param value Value to set.
*/
void memory_set(uint8_t* mem, uint16_t size, uint8_t value) {
    for (uint16_t i = 0; i < size; i++) {
        mem[i] = value;
    }
}

/**
 * \brief Frees memory.
 * \param mem Pointer to memory.
*/
void memory_free(uint8_t* mem) {
    free(mem);
}

/**
 * \brief Allocates memory.
 * \param size Size of memory.
 * \return Pointer to allocated memory.
*/
uint8_t* memory_alloc(uint16_t size) {
    /**
     *  1 - 1000
     * 
     *  |heap table segment|actual heap|
     *  start  1 , 50
     *  start  59, 111
     *   51 - 162 ?
     *  
     * 
     *  ex: 1 - 50 , 59 - 169 occupied
     * 
     *  10 segments ? 
     *  
    */
}

// 1) whether struct is supported ?
//  

#endif // MEMORY_H