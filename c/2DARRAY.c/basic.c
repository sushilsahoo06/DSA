#include<stdio.h>
#include<conio.h>

int main(){
    int arr[3][3]= {{1,2,3},{3,4,5},{7,8,9}};
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    getch();
}