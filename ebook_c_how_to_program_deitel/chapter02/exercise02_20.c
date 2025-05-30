
/* exercise02_20.c - Converting from Seconds to Hours, Minutes and Seconds.
   
   Write a program that asks the user to enter the total time elapsed, in seconds, since an event occurred
   and converts the time to hours, minutes, and seconds. The time should be displayed
   as hours:minutes:seconds. [Hint: Use the modulus operator]. */

#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main(void) {

    /* enter number of seconds to be converted */
    int seconds;
    printf("%s", "Enter total time in seconds: ");
    scanf("%d", &seconds);

    /* with seconds given, find equivalent number of minutes and update seconds (remainder) */
    int minutes = seconds / 60;
    seconds = seconds % 60;

    /* with minutes computed, find equivalent number of hours and update minutes (remainder)*/
    int hours = minutes / 60;
    minutes = minutes % 60;

    /* show time in HH:MM:SS format */
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    
    return EXIT_SUCCESS;
}