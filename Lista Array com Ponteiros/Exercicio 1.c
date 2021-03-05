/*
Elabore um programa que lê valores para um vetor de 17 posições e o escreve.
Escreve, a seguir, somente os números primos deste vetor. As rotinas de leitura e
escrita do vetor, bem como a rotina de pesquisa de números primos devem ser na
forma de função.
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
        if (vetor[i] > 1)   //só verifica se o número for maior que 1
        {
            d = 2;
            verifica = 1;
            limite = sqrt(vetor[i]); // determina o limite de busca de dividendos até a raiz quadrada do número analisado
                while(verifica && d <= limite) //laço de verificação
                {
                    if (vetor[i] % d  == 0) //se o número for divisível por d, este não é primo
                    {
                        verifica = 0;   //define como não primo
                    }
                    d++;    //incrementa o número para testar
                }
                    if (verifica)   // imprime se primo
                    {
                        // é o mesmo que verifica == 1
                        printf("O número %d, na posição: %d é primo.\n", vetor[i],i+1);
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
