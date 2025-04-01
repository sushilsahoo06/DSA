#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* link;
};
struct node* at_the_end (struct node* ptr ,int data);
int main (){
    

    struct node *head = malloc(sizeof(struct node));
    head ->data = 45;
    head ->link =NULL;
    
    struct node *ptr = head;
    ptr = at_the_end(ptr,45);
    ptr = at_the_end(ptr,67);
    ptr = at_the_end(ptr,98);
    
    ptr = head ;

    while(ptr != NULL){
        printf("%d ",ptr ->data);
        ptr =ptr->link;
    }
    return 0;
}

struct node* at_the_end (struct node* ptr ,int data){
    struct node* temp = malloc(sizeof(struct node));
    temp ->data = data;
    temp ->link = NULL;

    ptr -> link = temp;
    return temp;
}

