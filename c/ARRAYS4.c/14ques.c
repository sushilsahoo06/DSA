//count the number of elements in given array greater
//than a given X
#include<stdio.h>
#include<conio.h>
void main(){
    int x=4;
    int arr[5]={9,2,3,4,7};
    int count=0;
    for(int i=0;i<=4;i++){
        if (arr[i]>x){
           
            count++;
           
        }
        
    }
    printf("\n%d ",count);
    

    getch();
}