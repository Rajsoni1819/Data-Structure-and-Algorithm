#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

int main(){
    struct node* start = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));

    printf("Enter the data of first node;");
    scanf("%d",&start->data);
    start->next=second;

    printf("Enter the data of second node :");
    scanf("%d",&second->data);
    second->next=third;

    printf("Enter the data of third node :");
    scanf("%d",&third->data);
    third->next=NULL;

    printf("Linked list is \n");


    struct node*temp = start;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }


}