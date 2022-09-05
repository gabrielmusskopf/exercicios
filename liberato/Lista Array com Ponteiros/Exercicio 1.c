/*
Elabore um programa que l� valores para um vetor de 17 posi��es e o escreve.
Escreve, a seguir, somente os n�meros primos deste vetor. As rotinas de leitura e
escrita do vetor, bem como a rotina de pesquisa de n�meros primos devem ser na
forma de fun��o.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define TAM 17
#define LIM 20

void escreveVetor(int *vetor)
{
    int i;
    for(i=0; i<TAM; i++)
    {
        vetor[i]=rand()%LIM;
        printf("%d ",vetor[i]);

    }
}

void testaPrimos(int *vetor)
{
    int i,d,verifica=1,limite;
    for(i=0; i<TAM; i++)
    {
        if (vetor[i] > 1)   //s� verifica se o n�mero for maior que 1
        {
            d = 2;
            verifica = 1;
            limite = sqrt(vetor[i]); // determina o limite de busca de dividendos at� a raiz quadrada do n�mero analisado
                while(verifica && d <= limite) //la�o de verifica��o
                {
                    if (vetor[i] % d  == 0) //se o n�mero for divis�vel por d, este n�o � primo
                    {
                        verifica = 0;   //define como n�o primo
                    }
                    d++;    //incrementa o n�mero para testar
                }
                    if (verifica)   // imprime se primo
                    {
                        // � o mesmo que verifica == 1
                        printf("O n�mero %d, na posi��o: %d � primo.\n", vetor[i],i+1);
                    }
        }

    }
}

int main(void)
{
    int vet[TAM];
    int i,j,aux,count=0;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    escreveVetor(&vet);
    printf("\n");
    testaPrimos(&vet);

}
