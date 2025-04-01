#include<stdio.h>
#include<conio.h>
float swap(float x);
int main(){
    float mass;
    printf("enter the value of mass in kg \n");
    scanf("%f",&mass);
    float result = swap(mass);
    printf("the value of force in newton is %f",result);
    return 0;   
}
float swap(float x){
    float result=x * 9.8;
    return result;
}