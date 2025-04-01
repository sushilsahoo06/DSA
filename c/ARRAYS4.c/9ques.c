//calculate the product of all the elements in the given array ?
#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    int product = 1;
    for(int i =0;i<=n-1;i++){
        scanf("%d",&arr[n]);
    }
    for(int i=0;i<=n-1;i++){
        product = product*arr[n];
    }
    printf("%d",product);

    getch();
}