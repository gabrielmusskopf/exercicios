/*
Faça um programa que leia 100 valores e os escreva na ordem contrária à que
foram digitados. A rotina de escrita dos valores deve ser feita por uma função.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define TAM 100
#define LIM 20

void escreveVetor(int *vetor)
{
    int i;
    printf("Vetor\n");
    for(i=0; i<TAM; i++)
    {
        vetor[i]=rand()%LIM;
        printf("%d ",vetor[i]);

    }
    printf("\n\n");
}

void inverteVetor(int *vetor)
{
    int i;
    printf("Vetor Invertido\n");
    for(i=TAM-1; i>=0; i--)
    {
        printf("%d ",vetor[i]);
    }
    printf("\n\n");
}

int main(void)
{
    int vet[TAM];
    int i,j,aux,count=0;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    escreveVetor(&vet);
    inverteVetor(&vet);

}
