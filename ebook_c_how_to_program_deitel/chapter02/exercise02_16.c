
/* exercise02_16.c - Arithmetic

   Write a program that reads two integers from the user then displays
   their sum, product, difference, quotient and remainder. */

#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main(void) {

    /* enter two integers */
    int number1, number2;
    printf("%s", "Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    /* compute and show their sum */
    int sum = number1 + number2;
    printf("%d + %d = %d\n", number1, number2, sum);

    /* compute and show their product */
    int product = number1 * number2;
    printf("%d x %d = %d\n", number1, number2, product);

    /* compute and show their difference */
    int difference = number1 - number2;
    printf("%d - %d = %d\n", number1, number2, difference);

    /* compute and show their quotient */
    int quotient = number1 / number2;
    printf("%d / %d = %d\n", number1, number2, quotient);

    /* compute and show their remainder */
    int remainder = number1 % number2;
    printf("%d %% %d = %d\n", number1, number2, remainder);

    return EXIT_SUCCESS;
}
