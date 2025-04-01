//find the minimum element in given 2D array and index of minimum element
#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17};
    int min =INT_MAX;
    int minrow=0;
    int minco=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(min >arr[i][j]){
                min=arr[i][j];
                minrow =i;
                minco=j;
            }
        }
        
    }
    printf("index of maximum element :(%d,%d)\n",minrow,minco);
    printf("maximum element :%d",min);
    getch();
}