//print the factorial os a given number 'n'
#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact =fact*i;
        printf("the factorial of %d is  %d\n",i,fact);
    }
    //printf("the factorial of given number is %d",fact);
    getch();
}