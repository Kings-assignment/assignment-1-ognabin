// Write a C expression that evaluates whether a number is divisible by both 2 and 3 (without using the modulus operator).
#include <stdio.h>

int main (){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int result;
    result= (num % 2 == 0) && (num %3 == 0);

    printf("The result is %d\n", result);

    return 0;

}