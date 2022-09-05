
/*
Faça um programa que leia uma matriz mat 3 x 4 de inteiros, substitua seus
elementos negativos por 0 e escreva a matriz mat original e a modificada. A rotina
de escrita das matrizes deve ser realizada através de uma função.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define TAM 10
#define LIM 20
#define LIN 3
#define COL 4

void escreveMatriz(int *mat)
{
    int lin,col;

    printf("\nMatriz Original:\n");
    for(lin=0;lin<LIN;lin++)
    {
        for(col=0;col<COL;col++)
        {
            printf("\t%d",*mat);
            *mat++;
        }
        printf("\n");
    }
}

int  main(void)
{
    int matriz[LIN][COL];
    int lin,col,i,j,aux,count=0;

    printf("Digite valor para o elemento\n");
    for(lin=0;lin<LIN;lin++)
    {
        for(col=0;col<COL;col++)
        {
            printf("\t[%d][%d]",lin,col);
            scanf("%d",&matriz[lin][col]);
        }
    }

    escreveMatriz(&matriz);

    printf("\nMatriz Convertida:\n");

    for(lin=0;lin<LIN;lin++)
    {
        for(col=0;col<COL;col++)
        {
            if(matriz[lin][col]<0)
            {
                matriz[lin][col]= 0;
            }
            printf("\t%d ",matriz[lin][col]);
        }
        printf("\n");
    }
system("pause");
}
