
/* exercise07_09.c - Find the largest element

   Write a function that finds the largest element in an array
   of double values using the following function prototype:

   -> double max(double array[], size_t n); */

#include <stdio.h>
#include <stdlib.h>

/* function prototype */
double max(double array[], size_t n);

/* function main begins program execution */
int main(void) {

    double values[] = {3.4, 5.0, 7.1, 6.0, 9.2, 8.0, 7.5, 7.3, 12.0, 10.2};
    size_t length = sizeof (values) / sizeof (values[0]);

    double max_value = max(values, length);
    printf("Largest value in array: %.2lf\n", max_value);

    return EXIT_SUCCESS;
}

/* function definition */
double max(double array[], size_t n) {
    double largest = array[0];
    for (size_t i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    return largest;
}
