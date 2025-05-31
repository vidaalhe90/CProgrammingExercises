
/* exercise07_05.c - The number of even numbers and odd numbers.

   Write a program that reads ten integers, and the  displays the
   number of even numbers and odd numbers. Assume that the input ends
   with 0. */

#include <stdio.h>
#include <stdlib.h>


/* function main begins program execution */
int main(void) {

    int ocurrences[] = {0, 0};
    int input;

    printf("%s", "Enter numbers: ");
    for (;;) {
        scanf("%d", &input);
        if (input == 0) {
            break;
        }
        ocurrences[input % 2]++;
    }

    printf("The number of even numbers: %d\n", ocurrences[0]);
    printf("The number of odd numbers: %d\n", ocurrences[1]);

    return EXIT_SUCCESS;
}
