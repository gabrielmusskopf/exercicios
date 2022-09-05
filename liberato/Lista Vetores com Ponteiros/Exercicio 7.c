/*
Printa a matriz invertida
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIN 2
#define COL 5

void escreveMatriz(int *matriz){

    srand(time(NULL));
    int lin, col;

    printf("Matriz: \n");
    for(lin=0; lin<LIN; lin++)
    {
        for(col=0; col<COL; col++)
        {
            *matriz=rand()%10;
            printf("%d ", *matriz);
            *matriz++;
        }
        printf("\n");
    }
}


int main(void){

    int mat[LIN][COL];
    int lin, col, aux=0;
    int ultimaLinha, ultimaColuna;
    srand(time(NULL));

    escreveMatriz(&mat);
    printf("\n");

    printf("Matriz Invertida: \n");
    for(lin=LIN-1; lin>=0; lin--)
    {
        for(col=COL-1; col>=0; col--)
        {
            printf("%d ", mat[lin][col]);
        }
        printf("\n");
    }
    printf("\n");
}
