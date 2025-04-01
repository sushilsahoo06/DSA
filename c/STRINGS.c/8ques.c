#include<stdio.h>
#include<conio.h>

int main(){
    char str[100];
    //assuming maximum strinf of 100 character of string
    puts("enter a string");
    gets(str);
    int i=0,count;
    while (str[i]!='\0')
    {
        count++;
        i++;
    }
    
    printf("%d",count);
    getch();
}