#include <stdio.h>
#include "rand_gen.h"

void rand_cases(int seed) {
    set_seed(seed);
    printf("seed: %d\n", seed);

    for (int i = 0; i < 10; i++) {
        printf("%d\n", rand());
    }

    printf("\n");
}

int main(int argc, char* argv[]) {
    rand_cases(1);
    rand_cases(2);
    rand_cases(3);
    rand_cases(4);
    rand_cases(5);
    rand_cases(6);
    rand_cases(7);
    rand_cases(8);
    rand_cases(9);
    rand_cases(10);
}