#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter the number of row and coulmn :");
    scanf("%d ",&n);
    int arr[n][n];  
    printf("enter the elemnt :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    printf("transpose of matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]= temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    getch();
}