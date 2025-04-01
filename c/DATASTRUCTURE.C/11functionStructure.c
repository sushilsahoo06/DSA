#include<stdio.h>
#include<conio.h>
#include<string.h>
void pass(pikachu);
typedef struct pokemon{//global declaration
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

    pass(pikachu);
    return 0;
}
void pass(pokemon h){
    printf("%d",h.hp);
    return;
}