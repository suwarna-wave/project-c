#include <stdio.h>
#include <string.h>
#include "input_output.h"

void getInputString(char *input, int max_length) {
    fgets(input, max_length, stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove the trailing newline
}

void getInputDouble(double *input) {
    char buffer[100]; // Adjust the buffer size as needed
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lf", input);
}
