//given an array of integers ,change the value of all odd
//index elements to its second multiple and increament aii even index value by 10
#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++){
        if(i%2!=0){
          arr[i] = arr[i]*2;
        }
        else{
            arr[i]+=10;
        }
        printf("%d ",arr[i]);
    }
    // for(int i=0;i<=n;i++){
    //     printf("%d ",arr[i]);
    // }   
     getch();
}