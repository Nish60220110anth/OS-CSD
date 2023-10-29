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

// #include "../driver/display_driver.c"
#include "../games/tic_tac_toe.c"

void os_start() {
    // initialize the kernel
    minit();
}

void display_1() {
    write_string("This content is shown from inside the screen\n", 45);
    write_face(font_0);
    write_string("\n\n", 2);

    write_string("Functionality of the Display:\n", 30);
    write_string("1. Write a string\n", 18);
    write_string("2. Write a character\n", 21);
    write_string("3. Write a face\n", 16);
    write_string("4. Write a string at a given position\n", 38);
    write_string("5. Write a character at a given position\n", 41);
    write_string("6. Set cursor position\n", 23);
    write_string("7. Get cursor position\n", 23);
    write_string("8. Clear screen\n", 16);
    write_string("9. Clear line\n", 14);
    write_string("10. Print New Line\n", 19);
    write_string("11. Print Tab\n", 14);
    write_string("12. Support Backspace\n", 22);
    write_string("13. Print Form Feed\n", 20);
    write_string("14. Print Carriage Return\n", 26);
    write_string("15. Print Integer\n", 18);

    write_string("\n\n", 2);
    write_string("The End\n", 8);
}

void initial_display() {
    write_string("Welcome to Flex OS\n\n", 20);
    write_string("Press 'c' to clear screen\n\n", 27);
    write_string("Press 'd' to display some example content\n\n", 43);
    write_string("Press 'e' to play tic tac toe with the computer (easy)\n\n", 56);
    write_string("Press 'm' to play tic tac toe with the computer (medium)\n\n", 58);
    write_string("Press 'h' to play tic tac toe with the computer (hard)\n\n", 56);
    write_string("Press 't' to return back to terminal\n\n", 38);
    write_string("Press 'r' to get random numbers\n\n", 33);
    write_string("Press 'i' to get integer input\n\n", 32);
    write_string("Press 'q' to exit terminal\n", 27);
}

void int_input() {
    clear_screen();
    keyboard_clear_input();

    write_string("Enter an integer: \n", 19);
    int input = keyboard_get_int();
    printf("The integer is: %d\n", input);
    write_string("The integer is: ", 16);
    write_int(input);
    write_char('\n');
}

// function to capture data from memory and update the display
void terminal() {
    // init_memory();
    clear_screen();
    initial_display();
    bool isn = false;

    while (true) {
        // get input from keyboard
        char input = keyboard_get_input();
        printf("Got input: %c\n", input);

        if (input == 'c') {
            clear_screen();
            isn = false;
        }
        else if (input == 'd') {
            display_1();
            isn = false;
        }
        else if (input == 'q') {
            clear_screen();
            write_string("Exiting Terminal\n", 17);
            break;
        }
        else if (input == 'e') {
            tic_tac_toe(0);
            isn = false;
        }
        else if (input == 'm') {
            tic_tac_toe(1);
            isn = false;
        }
        else if (input == 'h') {
            tic_tac_toe(2);
            isn = false;
        }
        else if (input == 'i') {
            int_input();
        }
        else if (input == 't') {
            clear_screen();
            initial_display();
            isn = false;
        }
        else if (input == 'r') {
            int seed = 0;
            int count = 0;

            write_string("Enter the seed for the random number generator: \n", 49);
            seed = keyboard_get_int();
            write_string("Enter the count of random numbers you want: \n", 45);
            count = keyboard_get_int();

            printf("Seed: %d\n", seed);
            printf("Count: %d\n", count);

            write_string("The random numbers are: \n\n", 26);
            set_seed(seed);

            for (int i = 0; i < count; i++) {
                int random = rand();
                write_char(' ');
                write_int(i + 1);
                write_char(' ');
                write_char(':');
                write_char(' ');
                write_int(random);
                write_char('\n');
            }
        }
        else {
            if (!isn) {
                isn = true;
                write_string("\nCharacter printing\n", 20);
            }
            write_char(input);
        }
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
    write_string("After Tab", 9);
}



int main() {
    os_start();
    terminal();
    return 0;
}

#endif