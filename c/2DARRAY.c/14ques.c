#include <stdio.h>

int main() {
    int r, c1, r2, c2;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &r, &c1);
    int arr[r][c1];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    int brr[r2][c2];
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &brr[i][j]);
        }
    }
    if (c1 != r2) {
        printf("Matrices cannot be multiplied: Incompatible dimensions.\n");
        return 0;
    }

    // Compute multiplication
    int res[r][c2];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    // Print the result
    printf("Resultant of matrix multiplication is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
