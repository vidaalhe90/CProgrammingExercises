
/* exercise02_27.c - Summing the Digits of an Integer
   
   Write a program that inputs one 4-digit number, sums each
   of the individual digits, and then displays the result.
   [Hint: Use division and remainder operation] */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    /* enter a 4-digit number */
    int number;
    printf("%s", "Enter a 4-digit number: ");
    scanf("%d", &number);
    
    /* find units digit and update number */
    int units = number % 10;
    number = number / 10;

    /* find tens digit and update number */
    int tens = number % 10;
    number = number / 10;

    /* find hundreds digit and update number */
    int hundreds = number % 10;
    number = number / 10;

    /* find thousands digit (number update is not necessary) */
    int thousands = number % 10;

    /* sums all digits and display the result */
    int total = units + tens + hundreds + thousands;
    printf("%d + %d + %d + %d = %d\n", thousands, hundreds, tens, units, total);

    return EXIT_SUCCESS;
}
