/*
Elabore um programa em C que l� 20 valores inteiros e positivos quaisquer para um
vetor. Ap�s, escreva todos os valores impares numa �nica linha e os valores pares, um
em cada linha. OBS: implementar este c�digo utilizando fun��es que manipulam o vetor
atrav�s de ponteiros.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define TAM_VET 20
#define LIM 20

void printaVet(int *vetor)
{
    int i;
    srand(time(NULL));

    for(i=0; i<TAM_VET; i++)
    {
        vetor[i]=rand()%LIM;
        printf("%d ",vetor[i]);
    }
    printf("\n");
}

void vetorpares(int *p)
{
    int i;

    printf("Vetor Par: \n");
    for(i=0; i<TAM_VET; i++)
    {
        if(p[i]%2==0)
            printf("%d\n",p[i]);
    }
    printf("\n");
}

void vetorimpares(int *p)
{
    int i;

    printf("Vetor Impar: \n");
    for(i=0; i<TAM_VET; i++)
    {
        if(p[i]%2!=0)
            printf("%d ",p[i]);
    }
    printf("\n");
}

int main(void){

    int vet[TAM_VET];
    int i;

    printaVet(&vet);
    vetorpares(&vet);
    vetorimpares(&vet);
}
