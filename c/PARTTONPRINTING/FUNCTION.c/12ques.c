#include<stdio.h>
#include<conio.h>
int factorial(int x);
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("factorial of given number :%d",fact);
    return 0;
}
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}