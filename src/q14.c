// Create an expression that swaps the values of two variables x and y without using a temporary variable.
#include <stdio.h>

int main (){
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    printf("Value before x is %d and y is %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Value before x is %d and y is %d\n", x, y);
    
    return 0;
}