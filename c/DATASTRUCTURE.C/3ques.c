//creat a structure type'person' with name,salary and age as its atributes.
//declare and initialize 2 variables for this.print the name
//of first persion and age of the other.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    struct persion{
        char name[50];
        int salary;
        int age;
    }sushil,situ;

    strcpy(sushil.name,"sushil kumar sahoo");
    sushil.salary = 56784;
    sushil.age = 18;

    strcpy(situ.name,"kumar");
    situ.salary = 100000;
    situ.age = 25;

    printf("%s\n",sushil.name);
    printf("%d\n",situ.age);
    return 0;

}