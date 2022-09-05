/**
 * @brief: https://www.hackerrank.com/challenges/equal-stacks/problem
 * 
 * @author Gabriel Musskopf
 * @date 09/03/2021
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

typedef struct {
    int values[256];
    int top;
} stack; 

int isEmpty(stack *mystack){
    return mystack->top == -1;
}

bool push(stack *mystack, int value){
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

int peek(stack *mystack){
    if(isEmpty(mystack)) return STACK_EMPTY;
    return mystack->values[mystack->top];
}

void fillStack(int count, int* arr, stack *mystack){
    int stack_heigh = 0;
    for(int i = count-1; i >= 0; i--){
        stack_heigh += arr[i];
        push(mystack, stack_heigh);
    }
}

int equalStacks(int h1_count, int* h1, int h2_count, int* h2, int h3_count, int* h3) {

    stack s1, s2, s3;

    s1.top = EMPTY;
    s2.top = EMPTY;
    s3.top = EMPTY;

    fillStack(h1_count, h1, &s1);
    fillStack(h2_count, h2, &s2);
    fillStack(h3_count, h3, &s3);

    while(!isEmpty(&s1) && !isEmpty(&s2) && !isEmpty(&s3)){

        int s1_height = peek(&s1);
        int s2_height = peek(&s2);
        int s3_height = peek(&s3);
        // printf("%d %d %d \n", s1_height, s2_height, s3_height);

        if(s1_height == s2_height && s2_height == s3_height){
            return s1_height;
        }

        if(s1_height >= s2_height && s1_height >= s3_height){
            pop(&s1);
        }   
        else if (s2_height >= s1_height && s2_height >= s3_height){
            pop(&s2);
        }
        else if (s3_height >= s1_height && s3_height >= s2_height){
            pop(&s3);
        }
    }
    return 0;
}

int main(void){

    int h1_count = 5, h2_count = 3, h3_count = 4;
    int h1[5] = {3, 2, 1, 1, 1}; //{1, 1, 1, 1, 2}; 
    int h2[3] = {4, 3, 2}; //{3, 7};
    int h3[4] = {1, 1, 4, 1}; //{1, 3, 1}; //

    int *pt1 = h1;
    int *pt2 = h2;
    int *pt3 = h3;

    int heigth = equalStacks(h1_count, pt1, h2_count, pt2, h3_count, pt3);

    printf("ANS: %d ", heigth);

}