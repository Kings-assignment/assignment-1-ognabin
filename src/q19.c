// Given three variables a, b, and c, write an expression that checks if a is equal to b and b is not equal to c.
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter values for a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a == b) && (b != c)) {
        printf("True: a equals b, and b is not equal to c.\n");
    } else {
        printf("False: Condition not met.\n");
    }

    return 0;
}