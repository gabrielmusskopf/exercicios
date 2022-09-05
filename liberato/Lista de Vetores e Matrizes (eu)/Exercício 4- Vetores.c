/*
Escreva um algoritmo que lê um vetor A(10) e escreva a posição de cada elemento
igual a 10 deste vetor.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM 20
#define LIM 15

int main(void){

    int a[TAM];
    int i, j, count=0, aux, posicao=0;
    srand(time(NULL));

    for(i=0; i<TAM; i++)
    {
        a[i]=rand()%LIM;
        printf("%d ", a[i]);
    }

    for(i=0; i<TAM; i++)
    {
        if(a[i]==10)
        {
            printf("\nElemento igual a 10 na posicao %d ", i+1 );
        }
    }
}
