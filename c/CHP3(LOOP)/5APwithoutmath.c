#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int a=4;
    for ( int i = 1; i <=n; i++)
    {
    printf("%d ",a);
    a=a+3;
    }
    
    getch();
}