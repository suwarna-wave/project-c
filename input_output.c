#include <stdio.h>
#include <string.h>
#include "input_output.h"

void getInputString(char *input, int max_length) {
    scanf("%s", input);
    // Clear the input buffer
    while (getchar() != '\n')
        continue;
}

void getInputDouble(double *input) {
    scanf("%lf", input);
    // Clear the input buffer
    while (getchar() != '\n')
        continue;
}
