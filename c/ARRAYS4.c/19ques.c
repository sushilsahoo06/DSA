#include<stdio.h>
#include<conio.h>
#include<limits.h>
int main(){
    int arr[8]={13,23,67,23,12,67,45,65};
    int max =INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
        smax=max;//smax is now previous max
        max =arr[i];//max is now a new max
           
        }
        else if (smax<arr[i] && max!=arr[i]){//max > arr[i]
            smax=arr[i];
        }
    }
    printf("%d",smax);
     
    getch();
}