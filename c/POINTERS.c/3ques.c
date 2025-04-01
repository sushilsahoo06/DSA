#include<stdio.h>
#include<conio.h>

int main(){
    int a =7;
    int *x = &a;//int * ->int ka adress store karta hai
    int **y=&x;//int** ->int* ka adress store karta hai
    printf("%p\n",&x);
     printf("%p",y);
    getch();
}