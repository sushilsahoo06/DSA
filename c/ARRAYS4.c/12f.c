#include<stdio.h>
#include<conio.h>

void reverse(int arr[],int n);
int main(){
   int n;
   printf("enter a number :");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   printf("%d %d\n",arr[0],arr[1]);
   reverse(arr,n);
   printf("%d %d\n",arr[0],arr[1]);
   return 0;
}
void reverse(int arr[],int n){
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return;


}