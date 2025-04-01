//stair path
#include<stdio.h>
#include<conio.h>
int stair(int n);
int main(){
   int n;
   printf("enter a number :");
   scanf("%d",&n);
   stair(n);
   printf("%d",stair(n)); 
   return 0;
}
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1)+stair(n-2);
}