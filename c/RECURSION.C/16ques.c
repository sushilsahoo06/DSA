#include<stdio.h>
#include<conio.h>
int maze(int n,int m);
int main(){
    int n;
    printf("enter no of rows of the maze :");
    scanf("%d",&n);
    int m;
    printf("enter no of coulmn of the maze :");
    scanf("%d",&m);
    int nOofWays= maze(n,m);
    printf("%d",nOofWays);
    return 0;
}
int maze(int n,int m){
    int rightWays=0;
    int downWays =0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rightWays+=maze(n,m-1);
    }
    if(m==1){
        downWays+=maze(n-1,m);
    }
    if(n>1 && m>1){
        rightWays+=maze(n,m-1);
         downWays+=maze(n-1,m);
    }
    int totalways=rightWays + downWays;
    return totalways;
}