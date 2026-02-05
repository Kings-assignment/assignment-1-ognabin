// Write a C program to display a personalized greeting message. (Should contain 'hello' or 'welcome' in the message)
#include <stdio.h>

int main() {
    char name[50];

    printf("Please enter your name: ");

    scanf("%49s", name);

    printf("Hello, %s! Welcome to our C program.\n", name);

    return 0;
}