#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    printf("enter three number =");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c) && (b+c>a) || (c+a>b)){
         printf("valid trangle");
    }
    else
        printf("invalid trangle");

    getch();
}