#include<stdio.h>
#include<conio.h>

int main(){
    int x,y;
    printf("enter two number =");
    scanf("%d %d",&x,&y);
    if(x>0 ||x<0 && y==0)
    printf("the point lies x axis");
    else if(y>0||y<0 && x==0)
    printf("the point lies y axis");
    else if(x==0&&y==0)
    printf("at the origin");
    else
    printf("it not a axis");
    getch();
}