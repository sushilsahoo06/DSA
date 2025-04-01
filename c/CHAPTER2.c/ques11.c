#include<stdio.h>
#include<conio.h>

int main(){
    int ram;
    printf("enter age of Ram =");
    scanf("%d",&ram);
    int shyam;
    printf("enter age of Shyam=");
    scanf("%d",&shyam);
    int ajay;
    printf("enter age of Ajay=");
    scanf("%d",&ajay);
    if(ram<shyam){
        if(ram<ajay){
            printf("ram is youngest");
        }
        else
            printf("ajay is youngest");
    }
    else{
        if(shyam<ajay){
         printf("shyam is youngest");
        }
        else
            printf("ajay is youngest");
    }
    getch();
}