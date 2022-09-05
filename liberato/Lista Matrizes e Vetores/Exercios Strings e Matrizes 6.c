#include <stdlib.h>  #include <stdio.h>
#include <string.h>  #include <locale.h>
#include <time.h>

#define TAM 20

int main(void){

    int vet[TAM], i, j;

    srand(time(NULL));

    for(i=0; i<TAM; i++){
        vet[i]=rand()%TAM;
        printf("%d ",vet[i]);
    }
    printf("\n");
    for(i=TAM-1; i>-1; i--){
        printf("%d ",vet[i]);
        }
    }





