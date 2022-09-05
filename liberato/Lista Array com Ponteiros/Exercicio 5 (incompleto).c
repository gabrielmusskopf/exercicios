/*
Elabore um programa que lê valores inteiros para um matriz a[6][6]. Ordene, a
seguir, os valores da matriz, de forma que o menor valor esteja armazenado na
primeira posição da matriz e o maior na última. Escreva a matriz ordenada. O
processo de ordenação deve ser escrito na forma de uma função.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define TAM 10
#define LIM 20
#define LIN 6
#define COL 6

void ordenaMatriz(int *a)
{
    int *i,lin,col,count,aux;

    printf("Matriz Ordenada\n");
    for(i=*a; i<*(a+LIN*COL); i++)
    {
        if(*a>*(a+1))
        {
            aux=*a;
            *a=*(a+1);
            *(a+1)=aux;
        }
        printf("%d ",*a);
        *a++;
    }

}

int main(void)
{
    int a[LIN][COL];
    int i,j,lin,col,aux,count=0;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    printf("Matriz Original\n");
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

    ordenaMatriz(&a);



}
