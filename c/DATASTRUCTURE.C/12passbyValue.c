#include<stdio.h>
#include<conio.h>
#include<stdarg.h>

 typedef struct sushil{
        char name[20];
        int rollno;
        char branch[20];
        char grade;
    }sushil;
void swap(sushil *h);
int main(){
    

    sushil sahoo;

    strcpy(sahoo.name,"secrate seven");
    sahoo.rollno=23;
    strcpy(sahoo.branch,"civil");
    sahoo.grade ='A';

    swap(&sahoo);

    printf("%d",sahoo.rollno);
    return 0;
}
void swap(sushil *h){
    
    h->rollno=34;
    return ;
}
