#include<stdio.h>
#include<conio.h>

int main(){
    int x;
    printf("enter a number =");
    scanf("%d",&x);
    if(x%5==0 && x%3==0){
        printf("divisible by 5 and 3");
    }
    else
        printf("not divisible by 5 and 3");
    getch();
}