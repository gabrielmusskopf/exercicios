#include <stdlib.h>  #include <stdio.h>
#include <string.h>  #include <locale.h>
#include <time.h>

#define TAM 13

int main(void){

    int i, j, p, A[TAM], B[TAM], C[2*TAM];

    srand(time(NULL));                   //numero aleatorio a patir do horário

    printf("A:  ");                      //printa os numeros aleatorios do vetor A
    for(i=0;i<TAM;i++){

        A[i]=rand()% 40;
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("B:  ");                      //printa os numeros aleatorio do vetor B
    for(i=0;i<TAM;i++){

        B[i]=rand()% 40;
        printf("%d ",B[i]);
    }

    printf("\n");
    printf("C:  ");

    for(i=0;i<TAM;i++){

        C[i]=A[i];
        C[i+TAM]=B[i];
    }
    for(i=0;i<2*TAM;i++){                //printa os numeros de A e B no vetor C

        printf("%d ",C[i]);
    }

    printf("\n\n");
    printf("Ordenado:\n");

    for(i=0;i<2*TAM;i++)                 //"Tranca" o valor da posicao de C[i]
    {                                    //Compara esse valor com os próximos
        for(j=0;j<2*TAM;j++)
        {
            if(C[i]<C[j])                //Poe os valores em ordem crescente
            {
                p=C[i];
                C[i]=C[j];
                C[j]=p;
            }
        }
    }
    for(i=0;i<2*TAM;i++){
        printf("%d ",C[i]);
    }

}

