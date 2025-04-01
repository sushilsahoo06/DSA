#include<stdio.h>
#include<stdlib.h>

struct code{
    int i;
    char c;
    struct code *ptr;
};
int main(){
    struct code var1;
    struct code var2;

    var1.i = 45;
    var1.c ='g';
    var1.ptr=NULL;

    var2.i=89;
    var2.c=78;
    var2.ptr = NULL;

    var1.ptr = &var2;//var1 store the adress 0f var2 
    //it means var1 capable for acces for var2 meory
    printf("%d %c",var1.ptr->i,var1.ptr->c);
    return 0;
}
//i am traying to acces the member of var2,so i am callimg var2
//it is use full for linked list