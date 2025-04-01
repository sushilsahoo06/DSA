#include<stdio.h>
#include<conio.h>

int main(){
    struct pokemon{
        int hp;
        int attack;
        int speed;
    };
    struct legendarypokemon{
        int specialattack;
        struct pokemon x;
    };
}