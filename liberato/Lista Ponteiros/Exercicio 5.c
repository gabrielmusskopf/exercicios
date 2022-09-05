/*
Escrever um programa em C que lê valores para um vetor 30 posições, de inteiros.
Ordene, a seguir, os 30 valores em ordem crescente. Exibir os valores ordenados.
OBS: utilizar a implementação de aritmética de ponteiros para ordenar o vetor.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define TAM_VET 30
#define LIM 20


int main(void)
{
    int vet[TAM_VET];
    int i;

    printaVet(&vet);

    int *pVet=&vet;

    int ord=TAM_VET;
    while(ord>1)
    {
        for(i=0; i<TAM_VET; i++)
        {
            if(*(pVet) > *(pVet+1))
            {
                int aux = *pVet;
                *pVet = *(pVet+1);
                *(pVet+1) = aux;
                printf("%d ",*pVet);

            }
        printf("%d ",*pVet);
        *pVet++;
        }
    ord--;
    }
}

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
