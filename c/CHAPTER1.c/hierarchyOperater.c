#include<stdio.h>
#include<conio.h>

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr = arr;

    // for(int i=0;i<5;i++){
    //     printf("%d \n",*ptr);
    //     ptr++;
    // }
    ptr =&arr[5];
    printf("the reverse order has:");
    for(int i=0;i<5;i++){
        ptr--;
        printf("%d ",*ptr);
        
    }
    getch();
}