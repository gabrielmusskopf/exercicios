/*
Faça um programa que lê um vetor com 10 elementos e imprime apenas os valores
pares. A função que executa tal tarefa deve ter o seguinte protótipo:
void vetorpares (int *p);
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define TAM_VET 10
#define LIM 20

void vetorpares(int *p)
{
    int i;

    for(i=0; i<TAM_VET; i++)
    {
        if(p[i]%2==0)
            printf("%d ",p[i]);
    }
    printf("\n");
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

int main(void)
{
    int vet[TAM_VET];
    int i;

    printaVet(&vet);
    vetorpares(&vet);

}
