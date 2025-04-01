//wap a program to add two matrixces
//do it using without extra matix(solve)
#include<stdio.h>
#include<conio.h>

int main(){
    int arr[2][2]={2,3,4,5};
    int brr[2][2]={6,7,8,9};
    int result[2][2];
    printf("the frist matrix is\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("the second matrix is\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    printf("result\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j]=arr[i][j]+brr[i][j];
        }
        
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){ 
            printf("%d ",result[i][j]);
        }
        printf("\n");
        
    }

    
    getch();
}