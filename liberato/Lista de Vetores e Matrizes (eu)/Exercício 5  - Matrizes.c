/*
Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor
elemento da linha onde se encontra o maior elemento da matriz. Elabore um programa
que lê valores inteiro para um matriz a[6][6] e escreve o seu minimax juntamente com
sua posição.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM 20
#define LIM 50
#define LIN 6
#define COL 6

int main(){

    int a[LIN][COL];
    int lin,col,i,aux,count=0,maior;
    srand(time(NULL));

    printf("Original:\n");
    for(lin=0; lin<LIN; lin++)
    {
        for(col=0; col<COL; col++)
        {
            a[lin][col]=rand()%LIM;
            printf("%i ",a[lin][col]);
        }
        printf("\n");
    }

    count=LIN*COL;
    //while(count>1)
    {
        for(lin=0; lin<LIN; lin++)
        {
            for(col=0; col<COL; col++)
            {
                if(a[lin][col]>a[lin][col+1])
                {
                    maior=a[lin][col];
                }
            }
        }count--;
    }

    printf("\nmaior eh %d \n",maior);

}
