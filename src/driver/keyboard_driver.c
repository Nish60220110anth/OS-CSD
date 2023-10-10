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

#include "core/global.c"
#include "core/memory.c"


struct keyboard_driver_input {
    uint8_t primary_input;
    uint8_t secondary_input;
    bool can_use;
} keyboard_driver_input;

void keyboard_driver_input_init(struct keyboard_driver_input* input) {
    input->primary_input = 0;
    input->secondary_input = 0;
    input->can_use = false;
}

void keyboard_driver_input_set(struct keyboard_driver_input* input, uint8_t primary_input, uint8_t secondary_input, bool can_use) {
    input->primary_input = primary_input;
    input->secondary_input = secondary_input;
    input->can_use = can_use;
}

/**
 * \brief Initializes keyboard driver.
*/
void keyboard_driver_init() {
    memory_set(memory + IO_KEYBOARD_START, IO_KEYBOARD_SIZE, 0);
    // keyboard_driver_input_init(&keyboard_driver_input);
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
    bool useful_key = false;
    bool can_break = false;

    keyboard_driver_input_init(&keyboard_driver_input);

    while (true) {
        useful_key = false;
        can_break = false;

        if (memory[IO_KEYBOARD_START] != 0) {
            input = memory[IO_KEYBOARD_START];

            if (input == CTRL_CODE_CTRL) {
                for (uint8_t i = 0; i < KEYBOARD_WAIT_TIME; i++) {
                    if (memory[IO_KEYBOARD_START] != 0) {
                        second_input = memory[IO_KEYBOARD_START];
                        useful_key = true;
                        can_break = true;
                        break;
                    }
                }

                if (can_break) break;
            }
            // when we press shift, we try to return the shifted value
            // if we press shift and a, we return A
            // if we press shift and 1, we return !
            // and if press ', we change it to " and also the primary input to "
            // but we only press ', we return ' and not " in both primary and secondary input
            else if (input == CTRL_CODE_SHIFT) {
                for (uint8_t i = 0; i < KEYBOARD_WAIT_TIME; i++) {
                    if (memory[IO_KEYBOARD_START] != 0) {
                        second_input = memory[IO_KEYBOARD_START];

                        if (second_input >= 97 && second_input <= 122) {
                            second_input -= 32; // A - Z
                            input = 0;
                            useful_key = true;
                            break;
                        }
                        else if (second_input >= 65 && second_input <= 90) {
                            second_input += 32; // a - z
                            input = 0;
                            useful_key = true;
                            break;
                        }
                        else if (second_input >= 48 && second_input <= 57) {
                            switch (second_input) {
                            case 48:
                                second_input = 41; // )
                                break;
                            case 49:
                                second_input = 33; // !
                                break;
                            case 50:
                                second_input = 64; // @
                                break;
                            case 51:
                                second_input = 35; // #
                                break;
                            case 52:
                                second_input = 36; // $
                                break;
                            case 53:
                                second_input = 37; // %
                                break;
                            case 54:
                                second_input = 94; // ^
                                break;
                            case 55:
                                second_input = 38; // &
                                break;
                            case 56:
                                second_input = 42; // *
                                break;
                            case 57:
                                second_input = 40; // (
                                break;
                            default:
                                break;
                            }

                            useful_key = true;
                            input = 0;
                        }
                        else if (second_input == 96) {
                            second_input = 126; // ~
                            input = 0;
                            useful_key = true;
                            break;
                        }
                        else if (second_input == 45) {
                            second_input = 95; // _
                            input = 0;
                            useful_key = true;
                            break;
                        }
                        else if (second_input == 61) {
                            second_input = 43; // +
                            input = 0;
                            useful_key = true;
                            break;
                        }
                        else if (second_input >= 91 && second_input <= 93) {
                            switch (second_input) {
                            case 91:
                                second_input = 123; // {
                                break;
                            case 92:
                                second_input = 124; // |
                                break;
                            case 93:
                                second_input = 125; // }
                                break;
                            default:
                                break;
                            }
                            input = 0;
                            useful_key = true;
                            break;
                        }
                        else if (second_input == 59) {
                            second_input = 58; // :
                            input = 0;
                            useful_key = true;
                            break;
                        }
                        else if (second_input == 39) {
                            second_input = 34; // "
                            input = second_input;
                            useful_key = true;
                            break;
                        }
                        else if (second_input == 44) {
                            second_input = 60; // <
                            input = 0;
                            useful_key = true;
                            break;
                        }
                        else if (second_input == 46) {
                            second_input = 62; // >
                            input = 0;
                            useful_key = true;
                            break;
                        }
                        else if (second_input == 47) {
                            second_input = 63; // ?
                            input = 0;
                            useful_key = true;
                            break;
                        }
                        else {
                            second_input = input;
                            input = 0;
                            useful_key = false;
                            break;
                            // the secondary input is not a valid input
                        }
                    } // all cases are handled if primary input is shift
                }

                if (!useful_key) {
                    //  we waited for 5 count and still no input for shift
                    // so change secondary input to primary input
                    // only shift is sent as output
                    second_input = input;
                    input = 0;
                }

            }
            else if (input == CTRL_CODE_ALT) {
                for (uint8_t i = 0; i < KEYBOARD_WAIT_TIME; i++) {
                    if (memory[IO_KEYBOARD_START] != 0) {
                        second_input = memory[IO_KEYBOARD_START];
                        useful_key = true;
                        break;
                    }
                }

                if (!useful_key) {
                    second_input = input;
                    input = 0;
                }
            }
            else {
                // if the primary input is not ctrl, alt, shift, etc.
                // this can be either a alphabet or a number or a symbol
                // so we can return the input immediately
                second_input = input;
                input = 0;
                useful_key = true;
                can_break = true;
            }
            
            memory[IO_KEYBOARD_START] = 0;
        }
    }

    keyboard_driver_input_set(&keyboard_driver_input, input, second_input, useful_key);
    return keyboard_driver_input;
}

#endif // KEYBOARD_DRIVER_H