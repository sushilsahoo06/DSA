//user input in strinf
#include<stdio.h>
#include<string.h>
int main(){
    char str[56];
    //scanf("%s",str);//will be frist word will be considered
    gets(str);
    printf("input was :%s",str);
    
    return 0;
}