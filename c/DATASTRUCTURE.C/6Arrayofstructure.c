#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        char name[15];
        int attack;
        int speed;
        char tier;
    }pokemon;

    pokemon arr[3];
    strcpy(arr[0].name,"charejard");
    arr[0].attack = 45;
    arr[0].speed = 300;
    arr[0].tier ='A';

    strcpy(arr[1].name,"mewtow");
    arr[1].attack = 23;
    arr[1].speed = 78;
    arr[1].tier ='D';

    strcpy(arr[2].name,"pirachu");
    arr[2].attack = 22;
    arr[2].speed = 800;
    arr[2].tier ='B';

    for(int i=0;i<3;i++){
        printf("name :%s\n",arr[i].name);
        printf("attack : %d\n",arr[i].attack);
        printf("speed : %d\n",arr[i].speed);
        printf("tier : %c\n",arr[i].tier);
    }
    return 0;

}