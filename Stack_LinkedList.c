#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;


void push(int x){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL){
        printf("Stack Overflow");
        return;
    }
    newNode->data=x;
    newNode->next=head;
    head=newNode;
}

void pop(){
    struct node*temp = head;
    head = head->next;
    free(temp);

}

void display(){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}
int main()
{
    push(2);
    push(3);
    push(4);
    pop();
    display();

}
