#include<stdio.h>
#include<conio.h>
void increasing(int n);
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    increasing(n);
    return 0;
}
void increasing(int n){
    if(n==0) return;
   
    printf("%d\n",n);
    increasing(n-1);
    printf("%d\n",n);
    return; 
}