#include<stdio.h>
#include<conio.h>

int main(){
    //int i=19;
    //for(i=19;i<=190;i=i+19){
    //    printf("%d ",i);
    //}

    int n;
    printf("enter a number ");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i=i+n){
        printf("%d ",i);
    }
    getch();
}