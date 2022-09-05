#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

#define TAM 30

int primo(int N){
	int i = 2, primo = 1;
	if((N <= 2) && (N != 0)) return primo;
	do{
		if(N%i==0){
			primo = 0;
		}
		i++;
	}while((i < N) && (primo == 1));
	return primo;
}

int main(void){

    int vet[TAM], i, j, prime;

    srand(time(NULL));

    for(i=0;i<TAM;i++){
        vet[i]=rand()%TAM;
        printf("%d ",vet[i]);
    }
    printf("\n\n");

    for(i=0;i<TAM;i++){
        prime = primo(vet[i]);
        if (prime==1){
            vet[i]=0;
        }
    }

    for(i=0;i<TAM;i++){
        printf("%d ",vet[i]);
    }


    }

