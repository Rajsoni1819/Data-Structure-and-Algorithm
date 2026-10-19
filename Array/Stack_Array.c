#include<stdio.h>
#define N 5

int stack[N];

int top = -1;

void push(int x){
    if(top==N-1){
        printf("Stack Overflow");
    }
    else{
        top++;
        stack[top]=x;
    }

}

void pop(){
    int item;
    if(top ==-1){
        printf("Stack Underflow");
    }
    else{
        item = stack[top];
        top--;
    }
}

void display()
{
    int i=0;
    for(i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}
int main(){
    push(4);
    push(3);
    push(5);
    display();
    pop();
    display();

}


   
