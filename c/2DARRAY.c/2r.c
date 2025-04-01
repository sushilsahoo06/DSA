#include<stdio.h>
#include<conio.h>

int main(){
    int r, c;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    int brr[r][c];

    printf("Enter elements of the first matrix:\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &brr[i][j]);
        }
    }

    // Adding the matrices without using a third variable
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            arr[i][j] += brr[i][j];
        }
    }

    // Printing the result matrix
    printf("The result matrix after addition is:\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
   return 0;
    
}
