#include<stdio.h>
#include<conio.h>

int main(){
    int i =3;
    int *p1=&i;
    int **p2=&p1;
    printf("\n adress of i =%u",&i);
    printf("\n adress of p1 =%u",p1);
    printf("\n value of i =%d",*p1);
    printf("\n adress of p2 =%u",p2);
    printf("\n value of p2 =%u",*p2);
    printf("\n value of p2 =%u",&p2);
    printf("\n value of i =%u",**p2);
    getch();
}