#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("enter a number =");
    scanf("%d",&n);
    if(n>80 && n<100){
        printf("honours");
    }
    else if (n>=60 && n<=79){
        printf("1st div");
    }
    else if(n>=50 && n<=59){
        printf("2nd div");
    }
    else if(n>=40 && n<=49){
        printf("3rd div");
    }
    else
        printf("fail");
    getch();
    }