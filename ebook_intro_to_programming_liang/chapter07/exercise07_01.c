
/* exercise07_01.c - Assign Grades

   Write a program that reads students scores, gets the best score,
   and then assigns grades based on the following scheme:

   Grade A if score is >= best - 5,
   Grade B if score is >= best - 10,
   Grade C if score is >= best - 15,
   Grade D if score is >= best - 20,
   Grade F otherwise.

   The program prompts the use to enter the total number of students, and then
   prompts the user to enter all of the scores, and concludes by displaying the
   grades.
*/

#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main(void) {

    /* enter number of student scores to be considered */
    int n;
    printf("%s", "Enter the number of students: ");
    scanf("%d", &n);

    /* create an array of integers and enter student scores */
    int *scores = (int *)calloc(n, sizeof (int));
    printf("Enter %d scores: ", n);
    for (size_t i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    /* find best entered score */
    int best_score = scores[0];
    for (size_t i = 1; i < n; i++) {
        if (scores[i] > best_score) {
            best_score = scores[i];
        }
    }

    /* create an array of chars to store grade corresponding to each score */
    char *grades = (char *)calloc(n, sizeof (char));
    for (size_t i = 0; i < n; i++) {
        grades[i] = 'F';
        if      (scores[i] >= best_score - 5)  { grades[i] = 'A'; }
        else if (scores[i] >= best_score - 10) { grades[i] = 'B'; }
        else if (scores[i] >= best_score - 15) { grades[i] = 'C'; }
        else if (scores[i] >= best_score - 20) { grades[i] = 'D'; }
    }

    /* show score and grade for each student */
    for (size_t i = 0; i < n; i++){
        printf("Student %zu score is %d and grade is '%c'\n", i, scores[i], grades[i]);
    }

    /* free memory - scores array */
    if (scores != NULL) {
        free(scores);
        scores = NULL;
    }

    /* free memory - grades array */
    if (grades != NULL) {
        free(grades);
        grades = NULL;
    }

    return EXIT_SUCCESS;
}
