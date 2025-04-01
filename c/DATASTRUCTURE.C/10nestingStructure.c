#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[45];
    }pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[25];
    }legendarypokemon;

    legendarypokemon mewtwo;

    strcpy(mewtwo.ability,"mewtwo");
    mewtwo.normal.hp=150;
    mewtwo.normal.speed=300;
    mewtwo.normal.attack =38;

    printf("%d",mewtwo.normal.hp);
    return 0;
}