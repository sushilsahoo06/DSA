//memory allocation
#include<stdio.h>
#include<conio.h>

int main(){
    int arr[5]={1,3,5,6,7};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    getch();
}