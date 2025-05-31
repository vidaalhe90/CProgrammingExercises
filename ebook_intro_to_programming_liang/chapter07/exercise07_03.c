
/* exercise07_03.c - Count ocurrence of numbres.

   Write a program that reads the integers between 1 and 50
   and count the occurrences of each. Assume the input ends with 0. */


#include <stdio.h>
#include <stdlib.h>

#define N 50

/* function main begins program execution */
int main(void) {

    int ocurrences[N + 1] = {0};
    int input;
    
    printf("%s", "Enter integers between 1 and 50 (0 to quit): ");
    for (;;) {
        scanf("%d", &input);
        if (input == 0) {
            break;
        }
        if (1 <= input && input <= 50) {
            ocurrences[input]++;
        }
    }

    for (int i = 1; i <= N; i++) {
        char* time = "time";
        if (ocurrences[i] > 0) {
            if (ocurrences[i] > 1) {
                time = "times";
            }
            printf("%d occurs %d %s\n", i, ocurrences[i], time);
        }
    }

    return EXIT_SUCCESS;
}
