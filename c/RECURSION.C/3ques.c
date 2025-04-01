#include<stdio.h>
#include<conio.h>
void decreasing(int n);
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}
void decreasing(int n){
    if(n==0) return;
    printf("%d\n",n);
    return decreasing(n-1);
}