//find the differnce between the sum of elements at even indices to the sum of elements at the odd indices
#include<stdio.h>
#include<conio.h>

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int evensum = 0;
    int oddsum = 0;
    for(int i=0;i<=6;i++){
        if(i%2==0){
            evensum+=arr[i];
        }
        else
        oddsum+=arr[i];
    }
    int result = evensum - oddsum;
    printf("%d",result);
    getch();
}