
/* exercise02_18.c - Comparing Values
   
   Write a program that asks the user to enter the highest
   rainfall ever recorded in one season for a country, and the rainfall in the current year
   for that country, obtains the values from the user, checks if the current rainfall
   exceeds the highest rainfall, and prints an appropriate message on the screen. If the
   current rainfall is higher, it assigns that value as the highest rainfall ever. Use only the
   single-selection form of the if statement you learned in this chapter. */

#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main(void) {

    /* enter highest rainfall */
    int highest_rainfall;
    printf("%s", "Enter the highest rainfall recorded for a country: ");
    scanf("%d", &highest_rainfall);

    /* enter current year rainfall */
    int current_rainfall;
    printf("%s", "Enter the rainfaill in the current year (same country): ");
    scanf("%d", &current_rainfall);

    /* if current year rainfall is greater than previous record we update highest rainfall value */
    if (current_rainfall > highest_rainfall) {
        highest_rainfall = current_rainfall;
        puts("We have a new highest rainfall record!");
    }
    
    /* Display results */
    printf("Highets rainfall ever is %d\n", highest_rainfall);

    return EXIT_SUCCESS;
}
