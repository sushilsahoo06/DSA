#include<stdio.h>
#include<conio.h>
int tempature(int celsius);
int main(){
    int c;
    printf("enter celsius of atmosphere :");
    scanf("%d",&c);
    printf("fahrenheit of atmosphere %d",tempature(c));
    return 0;

}
int tempature(int celsius){
    int fahrenheit=(celsius *(9/5))+32;
    return fahrenheit;
}