#include<stdio.h>
#include<conio.h>

int main(){
    int r,c;
    printf("enter the no of rows :");
    scanf("%d",&r);
    printf("enter the no of coloumn :");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter row and coulmn :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }
    getch();
    
}