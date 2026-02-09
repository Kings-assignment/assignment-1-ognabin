// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"
#include <stdio.h>

int main() {
    int total_days, weeks, days;

    printf("Input = ");
    if (scanf("%d", &total_days) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    weeks = total_days / 7;     
    days = total_days % 7;      

    printf("Output = \"%d week%s and %d day%s\"\n", 
            weeks, (weeks == 1 ? "" : "s"), 
            days, (days == 1 ? "" : "s"));

    return 0;
}