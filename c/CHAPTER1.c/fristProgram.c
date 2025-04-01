#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr = arr;
    for(int i=0;i<n;i++){
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;

}    