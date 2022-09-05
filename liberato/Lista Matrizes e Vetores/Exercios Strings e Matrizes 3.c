#include <stdlib.h>  #include <stdio.h>
#include <string.h>  #include <locale.h>
#include <time.h>

#define TAM 30

int main(void){

    int vet[TAM], i, maior, pmaior, menor, pmenor;

    srand(time(NULL));

    for(i=0; i<TAM; i++)
    {
        vet[i]= rand()% TAM;
    }

    //acha o maior numero
    maior=vet[0];
    for(i=1; i<TAM; i++)
    {
        if(vet[i]>maior)
        {
            maior=vet[i];
            pmaior=i;
        }
    }

    //acha o menor numero
    for(i=0; i<TAM; i++)
    {
        if(vet[i]<menor)
        {
            menor=vet[i];
            pmenor=i;
        }
    }

    printf("Vetor:  ");
    for(i=0; i<TAM; i++)
    {
    printf("%d ",vet[i]);
    }

    printf("\nMaior: %d Posicao: %d ",maior,pmaior);
    printf("\nMenor: %d Posicao: %d ",menor,pmenor);

}
