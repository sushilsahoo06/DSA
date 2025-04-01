#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int a;
    printf("enter a power of number:");
    scanf("%d",&a);
    int q = pow(n,a);
    printf("the power is :%d",q);
    getch();
}
