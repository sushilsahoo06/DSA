//make a function which calculate 'a' raised to the power 'b' using recursion
#include<stdio.h>
#include<conio.h>
int function(int a ,int b);
int main(){
    int a;
    printf("enter the base :");
    scanf("%d",&a);
    int b;
    printf("enter power :");
    scanf("%d",&b);
    int v =function(a,b);
    printf("%d rised the power %d is %d",a,b,v);
    return 0;
}
int function(int a ,int b){
    if(b==0)return 1;
    return a*function(a,(b-1));
     
}