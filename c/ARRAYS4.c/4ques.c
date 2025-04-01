//given an array of marks of 10 students,if the mark of 
//any student is less than 35 print its roll no .
#include<stdio.h>
#include<conio.h>

int main(){
    int mark[10];
    int i;
    for( i=0;i<10;i++){
        int a=i+1;
        printf("enter the element %d =",a);
        scanf("%d",&mark[i]);
        // if(mark[i]<35){
        //     printf("%d ",i);
        // }
    }
    for(i=0;i<10;i++){

        if(mark[i]<=35){
            printf("%d ",i);
        }
    }
    getch();
}