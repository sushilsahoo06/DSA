#include<stdio.h>
#include<conio.h>

int main(){
    int n=4;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("* ",j);
        }
        printf("\n");
    }
    getch();
}