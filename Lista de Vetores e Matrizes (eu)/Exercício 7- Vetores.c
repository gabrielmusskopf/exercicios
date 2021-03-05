/*
Elabore um programa que lê 20 valores inteiros e positivos para um vetor e o escreve
(todos os valores numa linha). Escreva, a seguir, os valores informando, ao lado,
quantas vezes ele foi digitado no vetor.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM 20
#define LIM 10

int main(void){

    int vet[TAM];
    int i, j, count=0, aux;
    int zero=0,um=0,dois=0,tres=0,quatro=0,cinco=0,seis=0,sete=0,oito=0,nove=0,dez=0;
    srand(time(NULL));

    for(i=0; i<TAM; i++)
    {
        vet[i]=rand()%LIM;
        printf("%d ", vet[i]);
    }
/*
    for(i=0; i<TAM; i++)        //posição do vetor
    {
        for(j=0; j<TAM; j++)    //numero de comparação
        {
            if(vet[i]==j)
        }
    }
  */

    for(i=0; i<TAM; i++)
    {
        if(vet[i]==0)
        {
            zero++;
        }
        if(vet[i]==1)
        {
            um++;
        }
        if(vet[i]==2)
        {
            dois++;
        }
        if(vet[i]==3)
        {
            tres++;
        }
        if(vet[i]==4)
        {
            quatro++;
        }
        if(vet[i]==5)
        {
            cinco++;
        }
        if(vet[i]==6)
        {
            seis++;
        }
        if(vet[i]==7)
        {
            sete++;
        }
        if(vet[i]==8)
        {
            oito++;
        }
        if(vet[i]==9)
        {
            nove++;
        }
        if(vet[i]==10)
        {
            dez++;
        }
    }

        printf("\n\nO valor 0 apareceu %d vezes!\n",zero);
        printf("O valor 1 apareceu %d vezes!\n",um);
        printf("O valor 2 apareceu %d vezes!\n",dois);
        printf("O valor 3 apareceu %d vezes!\n",tres);
        printf("O valor 4 apareceu %d vezes!\n",quatro);
        printf("O valor 5 apareceu %d vezes!\n",cinco);
        printf("O valor 6 apareceu %d vezes!\n",seis);
        printf("O valor 7 apareceu %d vezes!\n",sete);
        printf("O valor 8 apareceu %d vezes!\n",oito);
        printf("O valor 9 apareceu %d vezes!\n",nove);
        printf("O valor 10 apareceu %d vezes!\n",dez);


}
