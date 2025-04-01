#include<stdio.h>
#include<conio.h>

int main(){
    int r,c;
    printf("enter the number of row and coulmn :");
    scanf("%d %d",&r,&c);
    int arr[r][c];  
    printf("enter the elemnt :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    int brr[c][r];
    printf("\n");
    printf("transpose of matrix\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            brr[i][j]=arr[j][i];
        }
        printf("\n");
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    getch();
}