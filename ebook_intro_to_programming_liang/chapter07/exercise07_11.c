
/* exercise07_11.c - Statistics: Compute deviation
    
   Write a program that prompts the user to enter 10 numbers and displays
   the mean and standard deviation. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10

double std_mean(double x[], size_t n);
double std_dev(double x[], size_t n);

/* function main begins program execution */
int main(void) {

    /* enter numbers */
    double x[N];
    printf("%s", "Enter 10 numbers: ");
    for (int i = 0; i < N; i++) {
        scanf("%lf", &x[i]);
    }

    /* computes and displays their average */
    double mean_x = std_mean(x, N);
    printf("The mean is %.4lf\n", mean_x);

    /* computes and displays their standard deviation */
    double dev_x = std_dev(x, N);
    printf("The standard deviation is %.4lf\n", dev_x);

    return EXIT_SUCCESS;
}

/* function that computes standard mean of passed numbers */
double std_mean(double x[], size_t n) {
    double sum = 0.0;
    for (size_t i = 0; i < n; i++) {
        sum += x[i];
    }
    return sum / n;
}

/* function that computes standard deviation of passed numbers  */
double std_dev(double x[], size_t n) {
    double sum = 0.0;
    double mean_x = std_mean(x, n);
    for (size_t i = 0; i < n; i++) {
        sum += pow(x[i] - mean_x, 2);
    }
    return sqrt(sum / (n - 1));
}
