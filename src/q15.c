// Write an expression that checks if a number is both positive and even.
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

   
    if ((num > 0) && !(num & 1)) {
        printf("%d is both positive and even.\n", num);
    } else {
        printf("%d is NOT both positive and even.\n", num);
    }

    return 0;
}