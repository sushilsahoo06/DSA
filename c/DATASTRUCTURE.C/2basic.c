#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    struct book{
        int noofpages;
        char name[50];
        float prise;
    
    }sushil;
    // struct book sushil;

    strcpy(sushil.name,"secrate seven");
    sushil.noofpages= 100;
    sushil.prise= 578;

    printf("%s\n",sushil.name);
    printf("%d\n",sushil.noofpages);
    printf("%f\n",sushil.prise);
    return 0;

}