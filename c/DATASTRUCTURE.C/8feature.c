#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        char name[20];
        int hp;
        int power;
        char tier;
    }pokemon;

    pokemon pirachu,charejord;

    strcpy(pirachu.name,"pirachu");
    pirachu.hp=200;
    pirachu.power=678;
    pirachu.tier='b';
    
    charejord =pirachu;

    printf("%d",charejord.hp);
    return 0;
}