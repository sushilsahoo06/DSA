#include<stdio.h>
#include<conio.h>

int main(){
    char arr[12]="hello world";
    int i=0;
    while (i<11)
    {
        printf("%c",arr[i]);
        i++;
    }
    
    
    getch();
}