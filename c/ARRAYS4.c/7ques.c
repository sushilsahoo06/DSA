//calculate the sum of all elements in the given array.
#include<stdio.h>
#include<conio.h>

int main(){
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++){
        int a=i+1;
        printf("enter the element %d=\n",a);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        sum =sum+arr[i];
    }
    printf("\n%d",sum);
    getch();
}