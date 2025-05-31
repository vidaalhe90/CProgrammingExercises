
/* exercise02_29.c - Sort in Ascending Order
   
   Write a program that inputs three different numbers from the user.
   Displays the numbers in increasing order. Prove that your script works by
   running it on all six possible orderings of the numbers. */

#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main(void) {
    
    /* enter three integers */
    int a, b, c;
    printf("%s", "Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    /* for a < b < c */
    if (a < b) if (b < c) {
        printf("%d %d %d\n", a, b, c);
    }

    /* for a < c < b */
    if (a < c) if (c < b) {
        printf("%d %d %d\n", a, c, b);
    }

    /* for b < a < c */
    if (b < a) if (a < c) {
        printf("%d %d %d\n", b, a, c);
    }

    /* for b < c < a */
    if (b < c) if (c < a) {
        printf("%d %d %d\n", b, c, a);
    }

    /* for c < a < b */
    if (c < a) if (a < b) {
        printf("%d %d %d\n", c, a, b);
    }

    /* for c < b < a */
    if (c < b) if (b < a) {
        printf("%d %d %d\n", c, b, a);
    }
    
    return EXIT_SUCCESS;
}
