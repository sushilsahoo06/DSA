//find the total number of pairs in the array whose sum is equal to the given value X
#include<stdio.h>
#include<conio.h>

int main(){
    int x=12;
    int totalPairs =0;
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i=1;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i]+arr[j]==x){
                totalPairs++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
            
        }
    }
    printf("%d",totalPairs);
    getch();
}