#include<stdio.h>
#include<conio.h>

int main(){
    int arr[2][2];
    int brr[2][2];
    int crr[2][2];
    printf("enter the frist array element :");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
      
        }
    }
    
    printf("enter the second array element :");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&brr[i][j]);
        }
    }

    printf("the frist matrix is :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("the second matrix is :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }

    printf("the result matrix is :\n");
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
        }
        
    }

    printf("the result matrix is :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }

    getch();
}