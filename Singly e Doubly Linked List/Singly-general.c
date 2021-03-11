/**
 * https://www.youtube.com/watch?v=RCHGco2NvMk&ab_channel=EngineerMan
 * https://github.com/engineer-man/youtube/tree/master/078
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct node_t {
    int data; // Pode ser qualquer coisa
    struct node_t *next;
}node_t;

// node_t *head = NULL;
typedef node_t *linkedList;

linkedList * add_at(linkedList *head, int pos, int data){
    node_t *node = malloc(sizeof(node_t) * 1);
    node->data = data;
    node->next = NULL;

    // Se a lista estiver vazia
    if(head == NULL){
        head = node;
        return;
    }

    int idx = 0;
    node_t *prev = NULL;
    node_t *cur = head;

    // Verificar lista até encontrar a posição
    while (cur != NULL && idx != pos){
        ++idx;
        prev = cur;
        cur = cur->next;  
    }

    // Chegou no ponto de inserção ou fim da lista

    // No início
    if(idx == 0){
        head = node;
        node->next = cur;
        return;
    }

    // No final
    if(cur == NULL){
        prev->next = node;
        return;
    }    

    // No meio
    prev->next = node;
    node->next = cur;

    return head;
}

linkedList * add_beg(linkedList *head, int data){
    return add_at(head, 0, data);
}

linkedList *add_end(linkedList *head, int data){
    // Garante que vai até o final da lista
    return add_at(head, -1, data);
}

void dumb(linkedList *head){
    node_t *temp = head;

    while(temp != NULL){
        printf("data: %d\n", temp->data);
        temp = temp->next;
    }
}


int main(void){
    linkedList l1;
    

    add_end(&l1,2);
    add_end(&l1,3);
    add_end(&l1,5);
    add_beg(&l1,1);
    add_at(&l1, 3, 4);

    printf("first:\n");
    dumb(&l1);

    // printf("second:\n");
    // rem(2);
    // rem(3);
    // dumb();

    // printf("\nis pos:2 in list?\n");
    // printf("%d\n",is_list(2));

    return 0;
}