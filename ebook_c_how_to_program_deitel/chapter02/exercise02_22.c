
/* exercise02_22.c - Odd or Even
   
   Write a program that reads an integer and determines and displays whether it's odd or even.
   Use the remainder operator. */

#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main(void) {

    /* enter number */
    int n;
    printf("%s", "Enter an integer: ");
    scanf("%d", &n);

    /* if n is even prints appropriate message and ends program execution */
    if (n % 2 == 0) {
        printf("%d is even\n", n);
        return EXIT_SUCCESS;
    }

    /* at this point n is odd */
    printf("%d is odd\n", n);

    return EXIT_SUCCESS;
}
