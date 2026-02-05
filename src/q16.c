// Given two variables x and y, write an expression that calculates the average of their values.
#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two integers separated by a space (e.g., 3 4): ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    double decimalAvg = ((double)x + y) / 2;

    int integerAvg = (x & y) + ((x ^ y) >> 1);

    printf("Exact Average (Decimal): %.1f\n", decimalAvg);
    printf("Integer Average (Truncated): %d\n", integerAvg);

    return 0;
}