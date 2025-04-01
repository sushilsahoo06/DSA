//reverse arrays

#include<stdio.h>
#include<conio.h>

int main(){
    int arr[4];
    for (int i=0;i<=3;i++){
        int a=i+1;
        printf("enter element number %d\n",a);
        scanf("%d",&arr[i]);
    }

    for(int i=3;i>=0;i--){
        printf("%d ",arr[i]);
    }
    getch();
}