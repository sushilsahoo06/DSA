#include<stdio.h>
#include<conio.h>

typedef struct sushil{
        int age;
        int weight;
}sushil;
void swap(sushil* h1,sushil* h2);
int main(){
    
    sushil s1,s2;

        printf("enter age of s1 persion :");
        scanf("%d",&s1.age);
        printf("enter weight of s1 persion :");
        scanf("%d",&s1.weight);
    
        printf("%d\n",s1.age);
        printf("%d\n",s1.weight);

        printf("enter age of s2 persion :");
        scanf("%d",&s2.age);
        printf("enter weight of s2 persion :");
        scanf("%d",&s2.weight);
    
        printf("%d\n",s2.age);
        printf("%d\n",s2.weight);

        swap(&s1,&s2);
        printf("%d\n",s1.age);
        printf("%d\n",s2.age);  
    return 0;
}

void swap(sushil* h1,sushil* h2){
    h1->age =28;
    h2->age=78;
    return;
}


