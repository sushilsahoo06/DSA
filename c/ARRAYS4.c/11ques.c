//find the minimum value out of all the elements in the array.
#include<stdio.h>
#include<conio.h>
#include<limits.h>
int main(){
    int arr[7] ={10,20,200,56,67,98,87};
    int max= INT_MAX;
    for(int i=0;i<=6;i++){
        if(max>arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    getch();
     
}
