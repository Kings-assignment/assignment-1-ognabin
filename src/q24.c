// Create an expression that checks if a given number is a perfect square.
// You can you math header file for this (eg: #include <math.h>)
#include <stdio.h>
#include <math.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && (sqrt(num) == (int)sqrt(num))) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}