
/* exercise02_16.c - Arithmetic

   Write a program that reads two integers from the user then displays
   their sum, product, difference, quotient and remainder. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int number1, number2;
    printf("%s", "Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    int sum = number1 + number2;
    printf("%d + %d = %d\n", number1, number2, sum);

    int product = number1 * number2;
    printf("%d x %d = %d\n", number1, number2, product);

    int difference = number1 - number2;
    printf("%d - %d = %d\n", number1, number2, difference);

    int quotient = number1 / number2;
    printf("%d / %d = %d\n", number1, number2, quotient);

    int remainder = number1 % number2;
    printf("%d %% %d = %d\n", number1, number2, remainder);

    return EXIT_SUCCESS;
}
