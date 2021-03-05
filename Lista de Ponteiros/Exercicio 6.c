#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100
#define QUANT 10

int tamVetor(int *vetor)
{
    int i, tamanho=0;

    for(i=0; i<TAM; i++)
    {
        tamanho=TAM;
    }

    return tamanho;
}

int main(void){

    int vetor[TAM];
    int i,tamanho;

    for(i=0; i<TAM; i++)
    {
        vetor[i]=rand()%QUANT;
        printf("%d ",vetor[i]);
    }
    printf("\n");

    tamanho=tamVetor(&vetor);
    printf("Tamanho do vetor eh %d ",tamanho);
}
