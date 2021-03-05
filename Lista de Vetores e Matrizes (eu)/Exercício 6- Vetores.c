/*
Faça um algoritmo que leia 100 valores e os escreva na ordem contrária à que foram
digitados.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM 10
#define LIM 15

int main(void){

    int vet[TAM];
    int i, j, count=0, aux;
    srand(time(NULL));

    for(i=0; i<TAM; i++)
    {
        vet[i]=rand()%LIM;
        printf("%d ", vet[i]);
    }
    printf("\n\n");

    for(i=TAM-1; i>=0; i--)
    {
        printf("%d ", vet[i]);
    }
    printf("\n\n");
}

