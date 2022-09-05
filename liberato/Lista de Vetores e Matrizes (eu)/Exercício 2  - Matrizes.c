/*
Elabore um programa que lê valores inteiros para um matriz a[6][6]. Ordene, a matriz,
de forma que o menor valor esteja armazenado na primeira posição da matriz e o maior
na última. Escreva a matriz ordenada.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM 20
#define LIM 100
#define LIN 6
#define COL 6

int main(void){

    int a[LIN][COL], result[2];
    int i,j,aux=0,count,lin,col,maior=0,menor=0;
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

count=36;
while(count>1)
{
    for(lin=0; lin<LIN; lin++)
    {
        for(col=0; col<COL; col++)
        {
            if(a[lin][col]>a[lin][col+1])
            {
                aux=a[lin][col];
                a[lin][col]=a[lin][col+1];
                a[lin][col+1]=aux;
            }
        }
    }count--;
}
count=36;
while(count>1)
{
    for(lin=LIN-1; lin>=0; lin--)
    {
        for(col=COL-1; col>0; col--)
        {
            if(a[lin][col]<a[lin][col-1])
            {
                aux=a[lin][col];
                a[lin][col]=a[lin][col-1];
                a[lin][col-1]=aux;
            }
        }
    }count--;
}
    printf("Matriz Modificada\n");
    for(lin=0; lin<LIN; lin++)
    {
        for(col=0; col<COL; col++)
        {
            printf("%d ",a[lin][col]);
        }
        printf("\n");
    }
    printf("\n\n");
}
