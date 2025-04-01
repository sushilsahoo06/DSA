#include<stdio.h>
#include<conio.h>

int main(){
    int x;
    printf("enter a number =");
    scanf("%d",&x);
    if(x>=90 && x<=100)
    printf("excellent");
    else if(x<=80)
    printf("very good");
    else if(x<=70)
    printf("good");
    else if(x<=60)
    printf("can be better");
    else if(x<=50)
    printf("avrage");
    else if(x<=40)
    printf("below avrage");
    else
    printf("fail");
    
    

    getch();
}