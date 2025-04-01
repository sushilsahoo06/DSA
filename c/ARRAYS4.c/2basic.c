#include<stdio.h>
#include<conio.h>

int main(){
    // int arr[5]={1,4,6,8,9};
    // for (int i=0;i<=4;i++){
    //     printf("%d ",arr[i]);
    // }

    int arr[5];
    for (int i=0;i<=4;i++){
        int a=i+1;
        printf ("enter element number %d\n",a);
        scanf("%d",&arr[i]);  
    }
    for(int i=0;i<=4;i++){
        printf(" %d",arr[i]);
    }
    getch();
}