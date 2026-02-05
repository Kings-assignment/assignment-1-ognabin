// Write a C expression that calculates the sum of the squares of three different numbers.
#include <stdio.h>

int main() {
    int a = 2;
    int b = 3;
    int c = 4;
    
    int result = (a * a) + (b * b) + (c * c); 
    
    printf("Sum of squares: %d", result);
    return 0;
}