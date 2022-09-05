/*
Elabore um programa que lê valores inteiros para um matriz a[6][6]. Calcule, a seguir, a
soma dos elementos das colunas e linhas, escrevendo estes resultados num vetor.
Escreva o vetor resultante.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM 20
#define LIM 10
#define LIN 6
#define COL 6

int main(void){

    int a[LIN][COL], result[2];
    int i,j,aux,lin,col;
    srand(time(NULL));

    for(lin=0; lin<LIN; lin++)
    {
        for(col=0; col<COL; col++)
        {
            a[lin][col]=rand()%LIM;
            printf("%d ",a[lin][col]);
        }
        printf("\n");
    }
    printf("\n\n");

    //não entendi o exercicio




}
