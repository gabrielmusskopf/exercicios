#include <stdlib.h>  #include <stdio.h>
#include <string.h>  #include <locale.h>
#include <time.h>

#define TAM 20

int main(void){

    int vet[TAM], i, j, p;

    srand(time(NULL));

    for(i=0; i<TAM; i++){
        vet[i] = rand() % TAM;
        printf("%d ",vet[i]);
    }

    for(i=0; i<TAM; i++){
        for(j=i+1; j<TAM; j++){
            if(vet[i]==vet[j])
            printf("\nO valor %d na posicao %d ,repete!",vet[i],i);


            }
        }

    }

