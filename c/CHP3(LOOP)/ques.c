#include<stdio.h>
#include<conio.h>

int main(){
    int a =5;
    int fact =1;
    for(int i=1;i<=5;i++){
        fact=fact*i;
    }
    printf("the factorial of %d = %d",a,fact);
    getch();
}