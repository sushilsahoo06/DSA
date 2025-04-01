#include<stdio.h>
#include<conio.h>

int main(){
    int r;
    printf("enter rows :");
    scanf("%d",&r);
    int c;
    printf("enter column :");
    scanf("%d",&c);
    int sum=0;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }
    printf("the sum of the given matrix :%d",sum);

    getch();
}