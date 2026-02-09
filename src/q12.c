// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.
#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;

    if ((a > b) && (c != 0)) {
        printf("Condition met: a is greater than b, and c is not zero.\n");
    } else {
        printf("Condition not met.\n");
    }

    return 0;
}