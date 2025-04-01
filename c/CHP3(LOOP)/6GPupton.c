#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter a number =");
    scanf("%d",&n);
    int a=1;
    for ( int i = 1; i <=n; i++)
    {
        printf("%d ",a);
        a=a*2;
    }
    
    getch();
}
