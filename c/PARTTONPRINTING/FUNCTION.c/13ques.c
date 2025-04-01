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
    int x=1;
    for(int i=0;i<=b;i++){
        x=a*2;
    }
    return x; 
}