//wap to reverse the array without using extra array
#include<stdio.h>
#include<conio.h>
void reverse(int arr[]){
    for(int i=0,j=6;i<j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int arr[7]={6,7,6,4,5,2,6};
    reverse(arr);
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}   
