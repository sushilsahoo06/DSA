#include<stdio.h>
#include<conio.h>

int main(){
    int l;
    printf("enter length =");
    scanf("%d",&l);
    int b;
    printf("enter breath =");
    scanf("%d",&b);
    int area = l*b;
    printf("area =%d\n",area);
    int parameter = 2*(l*b);
    printf("parameter =%d\n",parameter);
    if(area>parameter){
        printf("area is greater than parameter");
    }
    else
        printf("parameter is greater than parameter");
    

    getch();
}