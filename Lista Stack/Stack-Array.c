#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

// Para poder criar várias Stacks, e não somente uma stack global
typedef struct {
    int values[STACK_LENGTH];
    int top;
} stack; 

bool push(stack *mystack, int value){
    if(mystack->top >= STACK_LENGTH-1 ) return false;

    mystack->top++;
    mystack->values[mystack->top] = value;
    
    return true;
}

int pop(stack *mystack){
    if(mystack->top == EMPTY) return STACK_EMPTY;

    int result = mystack->values[mystack->top];
    mystack->top--;

    return result;
}

int main(void){
    stack s1, s2;

    s1.top = EMPTY;

    push(&s1, 45);
    push(&s1, 98);
    push(&s1, 21);


    int t;
    while ((t = pop(&s1)) != STACK_EMPTY){
        printf("%d was popped\n",t);
    }
    
}

