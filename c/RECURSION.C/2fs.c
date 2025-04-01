#include<stdio.h>
#include<conio.h>
void greeding(int n);
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    greeding(n);
    return 0;
}
void greeding(int n){
    for(int i=0;i<n;i++){
        printf("arush\n");
    }
    return;
}