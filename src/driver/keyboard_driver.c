/**
 * Keyboard driver: Keyboard driver for the OS has only  one function,
 * that is to get the input from the keyboard.
 *
 * Presently, the keyboard driver is not capable of handling meta keys like capslock, numlock, etc.
 * but it can handle ctrl, alt, shift, etc.
 *
*/

#ifndef KEYBOARD_DRIVER_H
#define KEYBOARD_DRIVER_H

#include <stdint.h>
#include <stdbool.h>

#include "core/global.h"
#include "core/memory.h"


struct keyboard_driver_input {
    uint8_t primary_input;
    uint8_t secondary_input;
} *keyboard_driver_input;

void keyboard_driver_input_init(struct keyboard_driver_input* input) {
    input->primary_input = 0;
    input->secondary_input = 0;
}

void keyboard_driver_input_set(struct keyboard_driver_input* input, uint8_t primary_input, uint8_t secondary_input) {
    input->primary_input = primary_input;
    input->secondary_input = secondary_input;
}

/**
 * \brief Initializes keyboard driver.
*/
void keyboard_driver_init() {
    memory_set(memory + IO_KEYBOARD_START, IO_KEYBOARD_SIZE, 0);
    int start = IO_KEYBOARD_START;
    int end = IO_KEYBOARD_START + IO_KEYBOARD_SIZE;
    for (int i = start;i < end;i++) {
        mwrite('\0', i);
    }
}

/**
 * \brief Gets input from keyboard.
 * \return Input from keyboard.
 * \note This function is blocking until input is received. And also
 *  this can take only one input at a time. Thus when we press ctrl or some other
 * meta keys, we wait for 5 count and return the combined output of the meta key but
 * if we press only normal alphabets, we return the output immediately (one byte being zero).
 *
 * \note primary input consists of meta keys like ctrl, alt, shift, capslock, etc.
 * \note secondary input consists of the actual input from the keyboard.
 * \note In some cases, the primary input is zero and the secondary input is the actual input.
 * or both consist of the actual input, but secondary input is always not zero.
*/
struct keyboard_driver_input keyboard_driver_get_input() {
    uint8_t second_input = 0;
    uint8_t input = 0;
    bool can_break = false;

    keyboard_driver_input_init(keyboard_driver_input);

    while (true) {
        can_break = false;

        char f = mread_char(IO_KEYBOARD_START);
        if (f != 0) {
            input = f;
            switch (f) {
            case CTRL_CODE_ALT: {
                for (int i = 0;i < KEYBOARD_WAIT_TIME;i++) {
                    char f = mread_char(IO_KEYBOARD_START);
                    if (f != 0) {
                        second_input = f;
                        can_break = true;
                        break;
                    }
                }
                break;
            }

            case CTRL_CODE_CTRL: {
                for (int i = 0;i < KEYBOARD_WAIT_TIME;i++) {
                    char f = mread_char(IO_KEYBOARD_START);
                    if (f != 0) {
                        second_input = f;
                        can_break = true;
                        break;
                    }
                }
                break;
            }

            case CTRL_CODE_SHIFT: {
                for (int i = 0;i < KEYBOARD_WAIT_TIME;i++) {
                    char f = mread_char(IO_KEYBOARD_START);
                    if (f != 0) {
                        second_input = f;
                        can_break = true;
                        break;
                    }
                }
                break;
            }

            case CTRL_CODE_CAPSLOCK: {
                can_break = true;
                break;
            }

            case CTRL_CODE_BACKSPACE: {
                can_break = true;
                break;
            }

            case CTRL_CODE_ENTER: {
                can_break = true;
                break;
            }

            default: {
                input = f;
                can_break = true;
                break;
            }
            }
        }

        if (can_break) break;
    }

    // check whether both keys are valid non zero keys
    keyboard_driver_input_set(keyboard_driver_input, input, second_input);
    return *keyboard_driver_input;
}

// todo: write another function that take manipulate the inputs taken from 
// the keyboard

#endif // KEYBOARD_DRIVER_H