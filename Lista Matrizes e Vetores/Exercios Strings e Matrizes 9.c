#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

#define TAM 50

int main(void){

    int vet[TAM], i, j, maior, pmaior, menor, pmenor, par=0, impar=0, prime;
    float med=0, medfinal=0;

    srand(time(NULL));

    for(i=0;i<TAM;i++){
        vet[i]=rand()%TAM;
        printf("%d ",vet[i]);
    }

    printf("\n\n");
//a)
    maior=vet[0];
    for(i=1;i<TAM;i++){
            if(vet[i]>maior){
                maior=vet[i];
                pmaior=i;
            }
    }
    printf("Maior valor: %d, na posicao %d \n",maior,pmaior);

//b)
    menor=vet[0];
    for(i=1;i<TAM;i++){
            if(vet[i]<menor){
                menor=vet[i];
                pmenor=i;
            }
    }
    printf("Menor valor: %d, na posicao %d \n\n",menor,pmenor);

//c)
    for(i=0;i<TAM;i++){
        med+=vet[i];
        medfinal=med/TAM;
    }

    printf("Valor da media aritmetica: %.2f \n\n",medfinal);

//d)
    for(i=0;i<TAM;i++){
        if(vet[i]%2==0 && vet[i]!=0){
            par++;
        }
        if(vet[i]%2!=0){
            impar++;
        }
    }
    printf("Numero de pares: %d \n",par);
    printf("Numero de impares: %d \n\n\n",impar);

//e)

    }





