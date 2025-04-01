//print 1 to n using parameter
#include<stdio.h>
#include<conio.h>
void increasing(int n,int x);
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}
void increasing(int n,int x){
    if(x<n) return;
    printf("%d\n",n);
    increasing(n+1,x);
    return;
}