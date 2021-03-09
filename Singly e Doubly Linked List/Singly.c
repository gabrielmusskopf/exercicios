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

node_t *head = NULL;

void add_at(int pos, int data){
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
}

void add_beg(int data){
    add_at(0, data);
}

void add_end(int data){
    // Garante que vai até o final da lista
    add_at(-1, data);
}

void rem(int data){
    node_t *prev = NULL;
    node_t *cur = head;

    while (cur != NULL && cur->data != data){
        prev = cur;
        cur = cur->next;
    }

    // Não encontrou o dado
    if(cur == NULL){
        return;
    }

    // Primeio item
    if(prev == NULL){
        if(cur->next == NULL){
            // único item
            head == NULL;
        } else {
            // mais itens
            head = cur->next;
        }

        free(cur);
        return;
    }

    // Último item
    if(cur->next == NULL){
        prev->next = NULL;

        free(cur);
        return;
    }

    // Item no meio
    if(prev != NULL && cur->next != NULL){
        prev->next = cur->next;

        free(cur);
        return;
    }
}

int is_list(int pos){
    node_t *prev = NULL;
    node_t *cur = head;
    
    int idx = 0;

    // Percorre procurando a posição
    while (cur != NULL && idx != pos){
        ++idx;
        prev = cur;
        cur = cur->next;
    }

    // Não tem essa posição
    if(cur == NULL){
        return 0;
    }

    return 1;
}

void dumb(){
    node_t *temp = head;

    while(temp != NULL){
        printf("data: %d\n", temp->data);
        temp = temp->next;
    }
}

int main(void){
    add_end(2);
    add_end(3);
    add_end(5);
    add_beg(1);
    add_at(3, 4);

    printf("first:\n");
    dumb();

    printf("second:\n");
    rem(2);
    rem(3);
    dumb();

    printf("\nis pos:2 in list?\n");
    printf("%d\n",is_list(2));

    return 0;
}