#include<stdio.h>
#include<conio.h>
float avrage(int x,int y,int z);
int main(){
    int a,b,c;
    printf("enter thre number :");
    scanf("%d %d %d",&a ,&b,&c);
    //int result =avrage(a,b,c);

    printf("avrge of three number %f",avrage(a,b,c));
    return 0;
}
float avrage(int x,int y,int z){
    float result = (float)(x+y+z)/3;
    return result;
}