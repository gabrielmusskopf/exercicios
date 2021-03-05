/*
Elabore um programa que lê valores inteiros para uma matriz M[5][5]. Localize, a
seguir, os valores repetidos, substituindo-os pelo valor –1. Escrever a matriz lida, a
matriz resultante (sem os valores –1) e quantos valores repetidos foram localizados.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define TAM 20
#define LIM 50
#define LIN 5
#define COL 5

int main(void)
{
	int M[LIN][COL];
	int lin,col,i,aux,count=0;
	srand(time(NULL));
	
	for(lin=0; lin<LIN; lin++)
	{
		for(col=0; col<COL; col++)
		{
			M[lin][col]=rand()%LIM;
			printf("%d ",M[lin][col]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	
	
}
