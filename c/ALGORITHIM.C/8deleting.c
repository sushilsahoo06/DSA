#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};

struct node *del_frist(struct node *head);
int main(){


    struct node *head=malloc(sizeof(struct node));
    head -> data = 45;
    head ->link =NULL;

    struct node *current =malloc(sizeof(struct node));
    current -> data = 98;
    current ->link = NULL;//initially it content NULL,later on it will be updated

    head ->link =current;
    
    current =malloc(sizeof(struct node));
    current -> data = 76;
    current ->link = NULL;

    head->link->link =current;
    //head is a pointer to the frist node of the list and by using this pointer,
    //i can access the link part of it  that why i will get this adress 2000
    head =del_frist(head);
    current = head;
    while(current != NULL){
        printf("%d ",current->data);
        current=current->link;
    }
    return 0;

}
struct node *del_frist(struct node *head){
    if(head == NULL){
        printf("thr list has already empty");
    }
    else{
        struct node *ptr = head;
        head=head->link;
        free(ptr);

    }
    return head;
}
