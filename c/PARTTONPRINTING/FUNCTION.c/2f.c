#include<stdio.h>
#include<conio.h>
//sum is a function whick takes a and b as input and returns an integer as an out put
int  sum(int a,int b);//function prototype declaraction

int main(){
    int a=9;
    int b=78;
    int c;
    c =sum(a,b);
    printf("sum =%d",c);
    return 0;
}
int sum(int a,int b){
    return a+b;
}