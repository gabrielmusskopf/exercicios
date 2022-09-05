#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

void printaOrdem(int *vetor){

    int i;
    printf("Posicoes:  ");
    for(i=0; i<TAM; i++)
    {
        printf("%d ", i);
    }

    puts(" ");

    printf("Elementos: ");
    for(i=0; i<TAM; i++)
    {
        printf("%d ", *vetor); //VETOR VEM APONTADO PARA A[0]
        *vetor++;              //SE NÃO ACRECENTAR, VAI PRINTAR SEMPRE O PRIMEIRO ELEMENTO
    }

}

int main(void){

    int A[TAM];
    int i;

    srand(time(NULL));

    for(i=0; i<TAM; i++)
    {
        A[i]=rand()%10;
        printf("%d ",A[i]);
    }
    printf("\n\n");

    //int *pA = &A;
    //printaOrdem(PA);

    printaOrdem(&A);

}
