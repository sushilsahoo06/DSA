//write a program to copy the contents of one array into another in the reverse order
#include<stdio.h>
#include<conio.h>
void main(){
    int arr[7]={1,2,3,4,5,6,7};
    int brr[7];
    for(int i=0;i<=6;i++){
        brr[i]=arr[6-i];
    }
    for(int i=0;i<=6;i++){
        printf("%d ",brr[i]);
    }
    getch();
}
