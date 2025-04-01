#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    // char str[100];
    // printf("enter a string :");
    char str[100]="Treading is not a gambling ,it game of patienace";
    //scanf("%s",str);
    int i=0;
    int count =0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
        count++;
    }
    printf("\n%d",count);
    
    getch();
}