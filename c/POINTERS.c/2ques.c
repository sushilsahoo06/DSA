#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b);

void swap(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
    return;
}

int main(){
    int a,b;
    printf("enter frist value number :");
    scanf("%d",&a);
    printf("enter second value :");
    scanf("%d",&b);
    swap(&a,&b);
    printf("after swaping a=%d,b=%d",a,b);
    return 0;
    
}