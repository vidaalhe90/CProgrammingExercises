
/* exercise02_19.c - Arithmetic, Largest Value and Smallest Value
   
   Write a program that inputs three different integers from the keyboard,
   then displays the sum, the average, the product, and the smallest and the largest
   of these numbers. Use only the single-selection form of the if statement you learned
   in this chapter. */

#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main(void) {

    /* enter integers */
    int number1, number2, number3;
    printf("%s", "Enter three different integers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    /* computes sum */
    int sum = number1 + number2 + number3;
    printf("Sum is %d\n", sum);

    /* computes average */
    int average = sum / 3;
    printf("Average is %d\n", average);

    /* computes product */
    int product = number1 * number2 * number3;
    printf("Product is %d\n", product);

    /* find smallest number */
    int smallest = number1;
    if (number2 < smallest) { smallest = number2; }
    if (number3 < smallest) { smallest = number3; }
    printf("Smallest is %d\n", smallest);

    /* find largest number */
    int largest = number1;
    if (number2 > largest) { largest = number2; }
    if (number3 > largest) { largest = number3; }
    printf("Largest is %d\n", largest);

    return EXIT_SUCCESS;
}
