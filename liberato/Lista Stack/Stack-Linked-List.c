#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

typedef struct  node{
    int value;
    struct node *next;
}node;

// Para poder criar várias Stacks, e não somente uma stack global
typedef node *stack;

bool push(stack *mystack, int value){
    node *newnode = malloc(sizeof(node));
    
    if(newnode == NULL ) return false;

    newnode -> value = value;
    newnode -> next = *mystack;
    *mystack = newnode;
    
    return true;
}

int pop(stack *mystack){
    if(*mystack == NULL) return STACK_EMPTY;

    int result = (*mystack)->value;
    node *temp = *mystack;
    *mystack = (*mystack)->next;
    free(temp);

    return result;
}

int main(void){
    stack s1 = NULL, s2 = NULL;

    push(&s1, 45);
    push(&s1, 98);
    push(&s1, 21);


    int t;
    while ((t = pop(&s1)) != STACK_EMPTY){
        printf("%d was popped\n",t);
    }
    
}

