/*
Elabore um programa que lê 30 valores inteiros para um vetor. Encontre o menor e o
maior valor deste vetor, escrevendo-os juntamente com a sua posição.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM 10
#define LIM 20

int main(void){

    int vet[TAM];
    int i, j ,aux, count, maior, menor,posiMaior, posiMenor;
    srand(time(NULL));

    printf("Vetor:\n");
    for(i=0; i<TAM; i++)
    {
        vet[i]=rand()%LIM;
        printf("%d ",vet[i]);
    }
    printf("\n\n");

    count=TAM;
    maior=0;
    while(count>1)
    {
        for(i=0; i<TAM; i++)
        {
            if(vet[i]>maior)
            {
                maior=vet[i];
                posiMaior= i;
            }
            if(vet[i]<menor)
            {
                menor=vet[i];
                posiMenor= i;
            }
        }
        count--;
    }

    printf("\nMaior: %d na posicao: %d \n",maior,posiMaior+1);
    printf("\nMenor: %d na posicao: %d \n",menor,posiMenor+1);
}
