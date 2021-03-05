/*
Elabore um programa para ler valores para dois vetores, a[13] e b[13]. Transfira, a
seguir, os valores lidos para um vetor c[26] e os escreva de maneira ordenada.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM 13
#define LIM 20

int main(void){

    int a[TAM], b[TAM], c[2*TAM];
    int i, j, aux, ord;
    srand(time(NULL));

    printf("Vetor A\n");
    for(i=0; i<TAM; i++)
    {
        a[i]=rand()%LIM;
        printf("%d ",a[i]);
    }
    printf("\n\nVetor B\n");
    for(i=0; i<TAM; i++)
    {
        b[i]=rand()%LIM;
        printf("%d ",b[i]);
    }


    printf("\n\n");


        for(i=0; i<TAM; i++)
        {
            c[i]=a[i];
        }

        for(i=TAM; i<2*TAM; i++)
        {
            c[i]=b[i-TAM];
        }

        printf("Vetor C\n");
        for(i=0; i<2*TAM; i++)
        {
            printf("%d ",c[i]);
        }

        printf("\n\nOrdem Crescente\n");

        ord = 2*TAM;
        while(ord>1)
        {
            for(i=0; i<2*TAM; i++)
            {
                if(c[i]>c[i+1])
                {
                    aux=c[i];
                    c[i]=c[i+1];
                    c[i+1]=aux;
                }
            }
            ord--;
        }

        for(i=0; i<2*TAM; i++)
        {
            printf("%d ",c[i]);
        }





}
