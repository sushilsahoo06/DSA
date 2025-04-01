#include<stdio.h>
void main(){
    int a;
    printf("enter divident :");
    scanf("%d",&a);
    int b;
    printf("enter divisor :");
    scanf("%d",&b);
    int r = a%b;
    printf("the remainder = %d",r);

}