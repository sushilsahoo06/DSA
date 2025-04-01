#include <stdio.h>

int main() {
    // Define a 2D array (matrix) to store roll numbers and marks
    int studentData[4][2];

    // Input data for each student
    for (int i = 0; i < 4; i++) {
        
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &studentData[i][0]);

        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &studentData[i][1]);
    }

    // Display the stored data
    printf("\nRoll Number\tMarks\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t\t%d\n", studentData[i][0], studentData[i][1]);
    }

    return 0;
}