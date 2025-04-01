//wap to print sum of digits of a given number.
#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter a number =");
    scanf("%d",&n);
    int sum =0;
    int ld = 0;//last digit
    while(n>0){
       ld = n%10;
       sum = sum + ld;
       n =n/10;   
    }
    printf("the sum of the digits are %d",sum);
    getch();
}