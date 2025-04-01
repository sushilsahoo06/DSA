#include<stdio.h>
#include<conio.h>

int main(){
    int a;
    printf("enter a number =");
    scanf("%d",&a);
    if(a>99 && a<1000){
        printf("integer is three digit");
    }
    else
        printf("inter is not three digit");
    getch();
}