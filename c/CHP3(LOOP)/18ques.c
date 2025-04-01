//print the sum of the series :1-2+3-4+5......up to n.
#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter a number =");
    scanf("%d",&n);
    int sum =0;
    for(int i=1;i<=n;i++){
        if (n%2!=0) sum =sum +i;
        else sum =sum-i;

    }
    printf("the sum is %d",sum);
    getch();
}//if(n%2==0)sum =(-n/2)for even terms
//if(n%2!=0)sum =(-n/2)+n for odd terms