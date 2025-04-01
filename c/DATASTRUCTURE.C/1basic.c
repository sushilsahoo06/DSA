// what is structure ?
#include<stdio.h>
#include<conio.h>

int main(){
    struct employee{  //user define data type
    int emp_id;
    char name;
    float salary;
    }sushil,situ;

    printf("enter employee id :\n");
    scanf("%d",&sushil.emp_id);
   // sushil.emp_id =130;
    sushil.name='s';
    sushil.salary=75000;
    printf("%d",sushil.emp_id);

    printf("enter employee id :");
    scanf("%d",&situ.emp_id);
   // situ.emp_id =130;
    situ.name='s';
    situ.salary=75000;
    printf("%d",situ.emp_id);
    
    return 0;


}