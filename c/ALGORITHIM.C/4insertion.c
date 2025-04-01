#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
void insertion(struct node *head,int data);
int main(){
  

    struct node *head =malloc(sizeof(struct node));
    head ->data=45;
    head ->link =NULL;

    struct node *current =malloc(sizeof(struct node));
    current ->data=67;
    current ->link=NULL;

    head ->link = current;

    current =malloc(sizeof(struct node));
    current -> data = 78;
    current -> link =NULL;

    head ->link -> link = current;

    int n;
    printf("enter a number :");
    scanf("%d",&n);

    insertion(head,n);

    struct node *temp= head;
    while(head ->link != NULL){
        head =head -> link;
       
        free(temp);
    }
    head = current;
    while(current != NULL){
        printf("%d ",current ->data);
        current =current->link;
    }

  
    return 0;
}
void insertion(struct node *head,int data){
    if(head == NULL){
        printf("the function has empty");
    }
    struct node *ptr = head;
    
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp ->link = NULL;
    while(ptr ->link != NULL){
        ptr =ptr -> link;
    }
    ptr ->link = temp;
   

    

    return;
}//doubt lect 40