#include<stdio.h>
#include<conio.h>

int main(){
    int x,y;
    printf("enter the value of x :");
    scanf("%d",&x);
    printf("enter the the value of y :");
    scanf("%d",&y);
    printf("before swaping two number : x=%d,y=%d \n",x,y);
       int z=x;
        x=y;
        y=z;
    printf("after swaping :x=%d,y=%d\n",x,y);  
    //using third variable


    
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swaping :x=%d,y=%d",x,y);
    getch();
}