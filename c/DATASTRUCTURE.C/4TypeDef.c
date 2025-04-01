#include<stdio.h>
#include<conio.h>
typedef float realnumber;

int main(){
    int x;
    realnumber y = 34.563;
    printf("%f",y);
    return 0;
}
//syntax typedef oldName NewName;



#include<stdio.h>
#include<conio.h>
typedef int* pointer;

int main(){
   int x=5,y=9;
   pointer a=&x,b=&y;
   printf("%u",b);
    printf("%u",b);
    return 0;
}
