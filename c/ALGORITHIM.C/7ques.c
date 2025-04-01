#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};

void add_beg(struct node **head ,int data);
int main(){
    struct node *head=malloc(sizeof(struct node));
    head -> data = 45;
    head ->link =NULL;

    struct node *current =malloc(sizeof(struct node));
    current -> data = 98;
    current ->link = NULL;

    head ->link =current;
    int data =78;

    add_beg(&head,data);
    current = head;
    while(current != NULL){
        printf("%d ",current ->data);
        current = current-> link;
    }
    return 0;
    

    

}
void add_beg(struct node **head ,int data){
    struct node* ptr = malloc(sizeof(struct node));
    ptr -> data =data;
    ptr ->link =NULL;

    ptr ->link= *head;

    *head= ptr;
    return ;
}