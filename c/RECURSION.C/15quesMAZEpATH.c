//maze path
#include<stdio.h>
#include<conio.h>
int maze(int cr,int cc,int er,int ec);
int main(){
    int n;
    printf("enter no of rows of the maze :");
    scanf("%d",&n);
    int m;
    printf("enter no of coulmn of the maze :");
    scanf("%d",&m);
    int nOofWays= maze(1,1,n,m);
    printf("%d",nOofWays);
    return 0;
}
int maze(int cr,int cc,int er,int ec){
    int rightways =0;
    int downways =0;
    if(cr==er && cc==ec)return 1;
    if(cr==er){
        rightways+=maze( cr, cc+1, er, ec);
    }
    if(cc==ec){
        downways+=maze( cr+1, cc, er, ec);
    }
    if(cr<er && cc<ec){
        rightways+=maze( cr, cc+1, er, ec);
        downways+=maze( cr+1, cc, er, ec);
    }
    int totalways=rightways+downways;
    return totalways;

}
