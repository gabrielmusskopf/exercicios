/**
 * Write a program in C to delete the last node of Singly Linked List.
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

void remove_at(int pos){

    node_t *prev = NULL;
    node_t *cur = head;
    int idx = 0;

    while (cur != NULL && idx != pos){
        ++idx;
        prev = cur;
        cur = cur->next;
    }

    // início
    if(pos == 0){
        if(cur->next == NULL){
            // não tem outro item
            head = NULL;
        } else {
            // tem outros itens
            head = cur->next;
        }

        free(cur);
        return;
    }

    // final
    if(cur == NULL){
        prev->next = NULL;
        return;
    }

    // meio
    if(prev != NULL && cur->next != NULL){
        prev->next = cur->next;

        free(cur);
        return;
    }
} 

void remove_last(){
    remove_at(-1);
}


int main(void){
    add_end(1);
    add_end(2);
    add_end(3);
 
    printf("first:\n");
    dumb();

    // printf("second\n");
    // remove_last();
    // dumb();

    return 0;
}