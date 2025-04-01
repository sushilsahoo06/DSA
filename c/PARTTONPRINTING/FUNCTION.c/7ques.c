//swap two number
#include<stdio.h>
#include<conio.h>

int main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    int z;
    z=a;
    a=b;
    b=z;
    printf("swapping two number a=%d \nb=%d\n",a,b);

    a =a+b;
    b = a - b;
    a = a -b;
    printf("again swapping two number a=%d \nb=%d",a,b);

    getch();
}