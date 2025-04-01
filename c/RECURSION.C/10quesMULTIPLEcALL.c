//write a function to calculate the 'n' term fibonacci number using recursion
#include<stdio.h>
#include<conio.h>
int fibonacci(int n);
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int f=fibonacci(n);
    printf(" the fibonacci series is :%d",f);
    return 0;
}
int fibonacci(int n){
    if(n==1 ||n==2)return 1;
    
    return fibonacci(n-1)+fibonacci(n-2);
}