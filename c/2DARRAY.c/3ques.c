#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    printf("Number of students: ");
    scanf("%d", &n);

    int student[n][4]; // Changed the array size to [n][4] to store roll number and three subjects
    for (int i = 0; i < n; i++) {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &student[i][0]); // Store roll number in the first column

        printf("Enter marks for physics, chemistry, and math for student %d: ", i + 1);
        scanf("%d %d %d", &student[i][1], &student[i][2], &student[i][3]); // Store marks in columns 1, 2, and 3
    }

    printf("\nRoll No\t\tPhy\tChe\tMath\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t%d\t%d\n", student[i][0], student[i][1], student[i][2], student[i][3]);
    }

    getch();
    return 0;
}