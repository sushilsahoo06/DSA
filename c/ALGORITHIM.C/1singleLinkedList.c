#include<stdio.h>
#include<stdlib.h>

int main(){
    struct node{
        int data;
        struct node *link;//linked with data
    };//self referactional structure
    //in single linked list then there only one linkd is allow we could have multiple data


    struct node *head=NULL;
    head =(struct node *)malloc(sizeof(struct node));
    //we have declare a pointer which is a point to a struct node
    //the malloc function to allocate momory for struct node
    //that means ,malloc is helping creat a node
    //memory has be allocated for data as well as the link part
    //and after that ,malloc will be return a void pointer whic can be typecasted to a struct node star
    //but is is avoid also because is not mandotary in c language
    //here after type casting ,the pointer becomes a point to a struct node which can be
    //stored with in head pointer
    //basically, the adress will be stored with in head pointer

    head ->data =45;
    head ->link =NULL;

    printf("%d",head -> data);
    free(head);
    return 0;

}