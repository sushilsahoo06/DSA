//write a program to print the sum of given number and reverse it.(palindrome)
#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter a number =");
    scanf("%d",&n);
    int x=n;
    int r =0;

    while(n>0){
        r = r*10;
        r = r +(n%10);
        n=n/10;
    }
   printf("the reverse number is %d\n",r);
    int sum =x+r;
    printf("the sum of reverse no is %d",sum);
    
    // if(x==r)
    // printf("the given no is palindrome");
    // else
    // printf("the given no is not palindrome");
    getch();
}
