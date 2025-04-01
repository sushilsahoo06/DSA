#include<stdio.h>
#include<conio.h>

int main(){
    char str[7]="susjil";
    
    str[3]=104;
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    getch();
}