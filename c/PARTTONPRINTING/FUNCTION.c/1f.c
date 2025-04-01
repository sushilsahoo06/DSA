#include<stdio.h>
#include<conio.h>
void goodmorning();
void goodafternoon();//prototype
void goodevening();
int main(){
    goodmorning();
    return 0;
}
void goodmorning(){
    printf("good morning sushil\n");
    goodafternoon();
}
void goodafternoon(){
    printf("good aftrnoon sushil\n");
    goodevening();
}
void goodevening(){
    printf("good evening sushil\n");
}



