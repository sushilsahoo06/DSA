#include<stdio.h>
#include<conio.h>
#include<math.h>
int power(int a,int b);
int main(){
    int a;
    printf("enter base :");
    scanf("%d",&a);
    int b;
    printf("enter power :");
    scanf("%d",&b);
    int v = power(a,b);
    printf("%d the power rised %d is %d",a,b,v);
    return 0;
}
int power(int a,int b){
    if(b==1)return a;
     int x = power(a,b/2);
    if(b%2==0){
        return x*x;
    }
    else
        return x*x *a;
    
}