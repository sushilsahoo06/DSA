#include<stdio.h>
#include<conio.h>
void greeding(int n);
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    greeding(n);
    return 0;
}
void greeding(int n){
    if(n==0) return;
   printf("hello world\n");
   greeding(n-1);
   return ;
}