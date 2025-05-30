
/* exercise02_17.c - Final Velocity

   Write a program that asks the user to enter the initial velocity
   and acceleration of an object, and the time that has elapsed, places them in the
   variables u, a, and t, and prints the final velocity, v, and distance traversed, s,
   using the following equations:

   a) v = u + at
   b) s = ut + (1/2)at^2 */

#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main(void) {

    int u, a, t;
    printf("%s", "Enter initial velocity (m/s), acceleration (m/s^2), and distance traversed (s): ");
    scanf("%d %d %d", &u, &a, &t);

    int v = u + a * t;
    printf("Final velocity v = %d m/s\n", v);

    int s = u * t + a * t * t / 2;
    printf("Distance traversed s = %d m\n", s);

    return EXIT_SUCCESS;
}
