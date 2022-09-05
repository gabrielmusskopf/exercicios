/**
 * Write a program in C to create a singly linked list of n nodes and count the number of nodes
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node_t{
    int data;
    struct node_t *next;
}node_t;


node_t *head = NULL;

void add_at(int pos, int data){
    node_t *node = malloc(sizeof(node_t) * 1);
    node -> data = data;
    node -> next = NULL;

    if(head == NULL){
        head = node;
        return;
    }

    int idx = 0;
    node_t *prev = NULL;
    node_t *cur = head;

    while(cur != NULL && idx != pos){
        ++idx;
        prev = cur;
        cur = cur->next;
    }

    if(idx == 0){
        head = node;
        node->next = cur;
        return;
    }

    if(cur == NULL){
        prev->next = node;
        return;
    }

    prev->next = node;
    node->next = cur;

}

void add_beg(int data){
    add_at(0, data);
}

void add_end(int data){
    add_at(-1, data);
}

void dumb(){
    node_t *temp = head;

    while(temp != NULL){
        printf("data: %d\n", temp->data);
        temp = temp->next;
    }
}

int count_nodes(){
    int nodes = 0;
    node_t *temp = head;

    while (temp != NULL){
        ++nodes;
        temp = temp->next;
    }
    return nodes;
}

int main(void){
    add_end(5);
    add_end(6);
    add_end(7);
 
    printf("first:\n");
    dumb();

    printf("Number of nodes is: %d\n", count_nodes());

    return 0;
}