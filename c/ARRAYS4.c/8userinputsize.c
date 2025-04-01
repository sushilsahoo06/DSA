#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<=n-1;i++){
        printf("enter the element :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        sum = sum + arr[i];
    }
    printf(" %d",sum);
    getch();
}