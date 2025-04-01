#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("enter a number =");
    scanf("%d" ,&a);
    /*if(a%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }*/
    a%2==0 ? printf("even") : printf("odd");
        getch();
    
    

}