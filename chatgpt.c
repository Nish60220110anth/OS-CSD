#include <stdio.h>
#include <string.h>

#define TOTAL_SIZE 100 // Replace with your desired size

int main() {
    const char* filename = "output.txt";
    FILE* file = fopen(filename, "w");
    
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        return 1;
    }

    char temp[9]; // Include space for the null terminator '\0'

    for (int i = 0; i < TOTAL_SIZE; i++) {
        for (int j = 0; j < 8; j++) {
            temp[j] = ((memory[i] >> j) & 1) ? '1' : '0';
        }

        temp[8] = '\0'; // Null-terminate the string

        fwrite(temp, sizeof(char), strlen(temp), file);
        char newline = '\n';
        fwrite(&newline, sizeof(char), 1, file);
    }

    fclose(file);

    return 0;
}
