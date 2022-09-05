
/*
Faça um programa que leia uma matriz mat 2 x 5 de inteiros e escreva os
elementos de mat na ordem inversa. A rotina de escrita da matriz deve ser
realizada através de uma função.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define TAM 10
#define LIM 20
#define LIN 2
#define COL 5

void escreveMatriz(int *matriz)
{
    int lin,col;

    printf("Matriz Original:\n");
    for(lin=0; lin<LIN; lin++)
    {
        for(col=0; col<COL;col++)
        {
            printf("\t%d",*matriz);
            *matriz++;
        }
        printf("\n");
    }
    printf("\n\n");
}

void inverteMatriz(int *matriz)                     //recebe apontando para o primeiro elemento
{
    int lin,col;
    int *ultimoMatriz = matriz+((LIN*COL)-1);       //ponteiro para apontar para o ultimo elemento

    printf("Matriz Invertida:\n");
    for(lin=LIN-1; lin>=0; lin--)
    {
        for(col=COL-1; col>=0; col--)
        {
            printf("\t%d",*ultimoMatriz);
            *ultimoMatriz--;
        }
        printf("\n");
    }printf("\n\n");
}

int main(void)
{
    int mat[LIN][COL];
    int lin,col,i,j,aux,count=0;
    srand(time(NULL));


    for(lin=0; lin<LIN; lin++)
    {
        for(col=0; col<COL;col++)
        {
            mat[lin][col]=rand()%LIM;
        }
    }

    escreveMatriz(&mat);
    inverteMatriz(&mat);

    system("pause");
}
