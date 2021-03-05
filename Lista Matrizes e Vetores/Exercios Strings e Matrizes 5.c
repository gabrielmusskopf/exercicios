#include <stdlib.h>  #include <stdio.h>
#include <string.h>  #include <locale.h>
#include <time.h>

#define TAM 25

int main(void){

    int X[TAM], i, j, subs;

    srand(time(NULL));

    printf("Vetor X:  ");
    for(i=0 ; i<TAM; i++){
        X[i]=rand()% TAM;
        printf("%d ",X[i]);
        }

    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            if(X[i]==0){
                X[i]=1;
            }
        }
    }

    printf(" Nova versao:  ");
    for(i=0; i<TAM; i++){
        printf("%d ",X[i]);
    }
}
