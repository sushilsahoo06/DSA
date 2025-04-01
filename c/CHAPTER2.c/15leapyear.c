#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter a year :");
    scanf("%d",&n);
    if(n%4 && n%100 || n%400){
        printf("this is a leap year");
    }
    else
    printf("this is not a leap year");
    return 0;
}