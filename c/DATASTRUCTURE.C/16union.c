#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef union pokemon{//global declaration
    int hp;
    int attack;
    char tier;
    char name[32];
}pokemon;
int main(){

    pokemon pikachu;

    pikachu.hp=45;
    pikachu.attack=300;
    pikachu.tier ='c';
    strcpy(pikachu.name,"sushil");

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%c\n",pikachu.tier);
    strcpy(pikachu.name,"sushil");

    return 0;
}
