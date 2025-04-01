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
   if(x==1 || x==0) return 1;
    return x*factorial(x-1);
}
//tree diagram
//fact(5) - 5*fact(4) - 4*fact(3) - 3*fact(2) - 2*fact(1) - 1