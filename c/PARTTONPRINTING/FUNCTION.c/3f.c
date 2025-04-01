#include<stdio.h>
#include<conio.h>
int  fun(int r,int pi);
int main(){
    int r;
    printf("enter radius :");
    scanf("%d",&r);
    int pi=3.14;
    int radius = fun(r,pi);
    printf("radius of circle :%d",radius);
    return 0;

}
int fun(int r,int pi){
    return pi *r*r;
}