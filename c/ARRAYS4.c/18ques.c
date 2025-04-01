#include<stdio.h>
#include<conio.h>
#include<limits.h>
int main(){
    int arr[8]={13,23,43,23,67,67,45,65};
    int max =INT_MIN;
    int smax =INT_MIN;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            max =arr[i];
        }
    }
    for(int i=0;i<=7;i++){
        if(arr[i]!=max && smax<arr[i]){
            smax = arr[i];
        }
    }
    printf("%d",smax);
     
    getch();
}