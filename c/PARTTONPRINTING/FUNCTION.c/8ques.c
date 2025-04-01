#include<stdio.h>
#include<conio.h>
void swap(int arr[]){
    int temp =arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    
    return;
}

int main(){
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    int arr[a];

    for(int i=0;i<a;i++){
        printf("enter the adress of array :",i+1);
        scanf("%d",&arr[i]);
    }
    swap(arr); 
    printf("swap the adress of array a=%d,b =%d",arr[0],arr[1]);
    //printf("%d %d",arr[0],arr[1]);
    return 0;
}