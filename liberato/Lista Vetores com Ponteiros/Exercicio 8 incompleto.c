/*
Printa a matriz invertida
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 6
#define QUANT 50

int escreveMatriz(int *matriz){

    srand(time(NULL));
    int lin, col;

    printf("Matriz: \n");
    for(lin=0; lin<TAM; lin++)
    {
        for(col=0; col<TAM; col++)
        {
            *matriz=rand()%QUANT;
            printf("%d ", *matriz);
            *matriz++;
        }
        printf("\n");
    }
}

int procuraMaximo(int *matriz){

    int lin, col, maior=0, menor=QUANT;
    int i;

    for(lin=0; lin<TAM; lin++)
    {
        for(col=0; col<TAM; col++)
        {
            if(*matriz>maior)
            {
                maior=*matriz;
            }
            *matriz++;
        }
    }
    /*
 for(col=0; col<TAM; col++)
                {
                    if(*matriz<menor)
                    {
                        menor=*matriz;
                    }
                }

*/
    return maior;

}

int main(void){

    int matriz[TAM][TAM];
    int lin,col,maior=0, menor;
    srand(time(NULL));

    escreveMatriz(&matriz);
    printf("\n");

    maior=procuraMaximo(&matriz);
    printf("O menor valor da linha com o maior valor eh: %d\n",maior);

}
