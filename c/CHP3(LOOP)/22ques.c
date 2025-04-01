#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum =0;
    printf("the fibonacci series %d %d ",a,b);
    for(int i=1;i<=n-2;i++){
        sum =a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
    printf("\nthe fibonacci series number %d",sum);
    getch();
}