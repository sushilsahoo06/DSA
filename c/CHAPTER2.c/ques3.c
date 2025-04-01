#include<stdio.h>
#include<conio.h>

int main(){
    int x;
    printf("enter a number =");
    scanf("%d",&x);
    if(x%4==0 && x%100!=0 || x%400==0){
        printf("it is a leap year");
    }
    else
        printf("not a leap year");
    
    getch();
}