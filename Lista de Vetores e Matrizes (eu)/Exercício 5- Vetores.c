/*
Escrever um algoritmo que lê um vetor X(25) e o escreve. Substitua, a seguir, todos os
valores nulos de X por 1 e escreva novamente o vetor X.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM 25
#define LIM 15

int main(void){

    int x[TAM];
    int i, j, count=0, aux;
    srand(time(NULL));

    for(i=0; i<TAM; i++)
    {
        x[i]=rand()%LIM;
        printf("%d ", x[i]);
    }

    for(i=0; i<TAM; i++)
    {
        if(x[i]==0)
        {
            x[i]=1;
        }
    }
    printf("\n\n");

    for(i=0; i<TAM; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n\n");
}
