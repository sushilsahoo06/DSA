//find the maximum element in given 2D array and index of maximum element
#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17};
    int max =INT_MIN;
    int maxrow=0;
    int maxco=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                maxrow =i;
                maxco=j;
            }
        }
        
    }
    printf("index of maximum element :(%d,%d)\n",maxrow,maxco);
    printf("maximum element :%d",max);
    getch();
}