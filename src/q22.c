// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
// You can you math header file for this (eg: #include <math.h>)
#include <stdio.h>
#include <math.h> // Required for sqrt and round

int main() {
    double a, b;
    int result;

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);

    result = (int)round(sqrt(a + b));

    printf("The square root of the sum (rounded) is: %d\n", result);

    return 0;
}