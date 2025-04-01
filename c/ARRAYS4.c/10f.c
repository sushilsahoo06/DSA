//find maximum value out of all elements in the array.
#include<stdio.h>
#include<conio.h>
#include<limits.h>
int maximum(int arr[],int n);
int main(){
   int n;
   printf("enter a number :");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   int maximumvalue =maximum(arr,n);
   printf("the maximum number is %d",maximumvalue);
   return 0;
}
int maximum(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
   }
   return max;


}