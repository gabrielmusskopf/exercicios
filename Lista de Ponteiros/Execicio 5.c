#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10
#define QUANT 10

void ordenaVetor(int *vetor)
{
    int i, maior=0, aux=0;

    for(i=0; i<TAM; i++)
    {
        if(*(vetor)<(*(vetor+1)))
        {
            aux=*(vetor);
            *(vetor) = *(vetor+1);
            *(vetor+1) = aux;
        }
        printf("%d ",*vetor);
        *vetor++;
    }


}

int main(void){

    int vetor[TAM];
    int i,maior=0;
    srand(time(NULL));

    for(i=0; i<TAM; i++)
    {
        vetor[i]=rand()%QUANT;
        printf("%d ",vetor[i]);
    }
    printf("\n");

    ordenaVetor(&vetor);
}
