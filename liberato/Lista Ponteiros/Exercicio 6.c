/*
Implementar uma função que recebe um vetor e retorna o seu tamanho.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define TAM 20
#define LIM 20

void tamvet(int *vetor){

    int tam;

    tam=strlen(*vetor);
    return tam;
}

int main(void){

    int vet[TAM];
    int tamanho,i;
    srand(time(NULL));

    printf("Digite um vetor numerico, 0 finaliza:\n");
        for(i=0; i<TAM; i++)
        {
            printf("%d = ",i+1);
            scanf("d",&vet[i]);
        }


    printf("\n");

    //tamanho=tamvet(&vet);
    printf("Tamanho: %d ",tamanho);
}
