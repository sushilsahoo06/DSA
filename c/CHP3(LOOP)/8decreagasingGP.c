#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    float a=100;
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a=a/2;
    }

    getch();
}
