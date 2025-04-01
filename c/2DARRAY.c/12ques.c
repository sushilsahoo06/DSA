//wap a program to rotate a matrix 90 degree clock wise
#include<stdio.h>
#include<conio.h>

int main(){
    int r,c;
    printf("enter the number of row and coulmn :");
    scanf("%d %d",&r, &c);
    int arr[r][c];  
    printf("enter the elemnt :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    printf("transpose of matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]= temp;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    printf("rotate 90 degree\n");
   
  
    for (int i = 0; i < r; i++) {
        for (int j = c - 1; j >= 0; j--)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
    
    
    getch();
}