#include<stdio.h>
#include<conio.h>

int main(){
    typedef struct data{
        int day;
        int month;
        int year;
    }date;

    date a,b;

    a.day = 12;
    a.month =06;
    a.year =2020;
    
    b.day = 12;
    b.month =04;
    b.year =2023;

    int true =0;
    
    for(int i=0;i<1;i++){
        if(a.day != b.day || a.month != b.month || a.year != b.year){
            true =1;
            break;
        }

    }
    if(true !=1){
        printf("the dates are same");
    }
   else printf("the dates are different");
    return 0;
     
}