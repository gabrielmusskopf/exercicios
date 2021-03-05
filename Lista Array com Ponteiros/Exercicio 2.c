/*
Escreva um programa que lê valores para um vetor A(10) e escreva a posição de
cada elemento igual a 10 deste vetor. A rotina de pesquisa e escrita das posições
deve ser feita por uma função.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define TAM 10
#define LIM 20

void escreveVetor(int *vetor)
{
    int i;
    for(i=0; i<TAM; i++)
    {
        vetor[i]=rand()%LIM;
        printf("%d ",vetor[i]);

    }
}

int procura10(int *vetor)
{
    int i;
    for(i=0; i<TAM; i++)
    {
        if(vetor[i]==10)
        {
            printf("Elemento igual a 10 na posicao %d \n",i+1);
            return 1;
        }else return 0;
    }
}

int main(void)
{
    int vet[TAM];
    int i,j,aux,count=0;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    escreveVetor(&vet);
    printf("\n");

    if(procura10(&vet)==0)
    {
        printf("\nNenhum elemento igual a 10");
    }
    puts(" ");







}
