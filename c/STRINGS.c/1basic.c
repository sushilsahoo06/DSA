#include<stdio.h>
#include<conio.h>

int main(){
    char arr[]={'h','e','l','l','l','o','\0'};
    int i=0;
    while(arr[i]!='\0'){
        printf("%c ",arr[i]);
        i++;
    } 
    getch();
}