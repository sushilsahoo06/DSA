#include<stdio.h>
#include<conio.h>

int main(){
    int a =5;
    int *x=&a;
    printf("%p\n",x);
    printf("%p",&x);
    getch();
}