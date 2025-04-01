//wap to count digits of a given number.
#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter a number = ");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("the no of digits are =%d",count);
    
    getch();
}