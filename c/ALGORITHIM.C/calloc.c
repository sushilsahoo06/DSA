#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("enter the number of integers :");
    scanf("%d",&n);
    int *ptr =(int *)calloc(n,sizeof(int));

    if(ptr==NULL){
        printf("memory is not available");
        exit(1);
    }
    for(int i=0;i<n;i++){
        printf("enter integer %d:",i+1);
        scanf("%d",(ptr+i));
    }
    printf("the given integer are :");
     for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
        
    }
    free(ptr);
    return 0;

}
