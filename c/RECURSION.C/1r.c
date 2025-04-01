#include<stdio.h>
#include<conio.h>
int factorial(int a);
int main(){
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    int c =factorial(a);
    printf("the value of factorial %d is %d",a,c);
    return 0;
}
int factorial(int a){
    printf("calling factorial(%d)\n",a);
    if(a==1||a==0){
        return 1;
    } 
    else{
        return a * factorial(a-1);
    }
}