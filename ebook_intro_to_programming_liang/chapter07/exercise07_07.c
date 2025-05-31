
/* exercise07_07.c - Count single digits

   Write a program that generates 200 random integers between
   0 and 9 and displays the count for each number. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 200
#define DIGITS 10

int main(void) {

    int occurrences[DIGITS] = {0};
    srand(time(NULL));
    
    for (int i = 1; i <= N; i++) {
        occurrences[rand() % DIGITS]++;
    }

    for (int i = 0; i < DIGITS; i++) {
        printf("Digit %d ocurrs %d times\n", i, occurrences[i]);
    }
    return EXIT_SUCCESS;
}
