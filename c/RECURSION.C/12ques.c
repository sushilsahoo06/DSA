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
    if(n==1 ||n==2 ||n==3) return n; 
    return stair(n-1)+stair(n-2)+stair(n-3);
}