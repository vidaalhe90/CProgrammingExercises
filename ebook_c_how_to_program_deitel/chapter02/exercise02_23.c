
/* exercise02_23.c - Multiples

   Write a program that reads two integers and determines and displays whether
   the first is a multiple of the second. Use the remainder operator. */

#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main(void) {

    /* enter numbers */
    int a, b;
    printf("%s", "Enter two integers: ");
    scanf("%d %d", &a, &b);

    /* if b is divisible by a, then a is is a multiple of b */
    if (b % a == 0) {
        printf("%d is a multiple of %d\n", a, b);
        return EXIT_SUCCESS;
    }

    /* at this point, a is not a multiple of b */
    printf("%d is not a multiple of %d\n", a, b);

    return EXIT_SUCCESS;
}
