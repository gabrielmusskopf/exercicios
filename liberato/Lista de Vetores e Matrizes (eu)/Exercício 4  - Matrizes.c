/*
Faça um programa que leia uma matriz mat 2 x 5 de inteiros e imprima os elementos
de mat na ordem inversa.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM 20
#define LIM 50
#define LIN 2
#define COL 5

int main(void){

    int mat[LIN][COL];
    int lin,col,i,j,aux,count=0;
    srand(time(NULL));

    printf("Original:\n");
    for(lin=0; lin<LIN; lin++)
    {
        for(col=0; col<COL; col++)
        {
            mat[lin][col]=rand()%LIM;
            printf("%i ",mat[lin][col]);
        }
        printf("\n");
    }
    printf("\n\nInversa:\n");

    for(lin=LIN-1; lin>=0; lin--)
    {
        for(col=COL-1; col>=0; col--)
        {
            printf("%i ",mat[lin][col]);
        }
        printf("\n");
    }
    printf("\n\n");
}
