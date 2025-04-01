#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    typedef struct sushil{
        char name[20];
        int rollno;
        char branch[10];
    }sushil;
    
    sushil sahoo;
    strcpy(sahoo.name,"situ");
    sahoo.rollno =2;
    strcpy(sahoo.branch,"civil");

    sushil *x = &sahoo;
    printf("%u\n",&x);
    printf("%u\n",&sahoo.name);
    printf("%u\n",&sahoo.rollno);
    printf("%u\n",&sahoo.branch);

    printf("%s\n", x->branch);
   

    
    
    return 0;
}