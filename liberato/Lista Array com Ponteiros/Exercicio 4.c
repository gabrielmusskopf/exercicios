
/*
Elabore um programa que leia 50 valores para um vetor A e o escreve. Além da
leitura e escrita do vetor, o algoritmo deve ter:
a) Uma função que encontre e escreva o maior valor e sua posição;
b) Uma função que encontre e escreva o menor valor e sua posição;
c) Uma função que calcula e retorna a média aritmética dos valores lidos;
d) Uma função que retorne quantos valores são pares;
e) Uma função que retorne quantos valores são impares:
f) Uma função que escreva todos os números primos.
*/

/*
PLUS MENU COLORIDO DE OPÇOES.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>


#define TAM 30
#define LIM 100
#define ANSI_COLOR_RED      \033[0;31m //cores em ANSI utilizadas -- para bold, \033[1;XXm
#define ANSI_COLOR_GREEN    \033[0;32m
#define ANSI_COLOR_YELLOW   \033[0;33m
#define ANSI_COLOR_BLUE     \033[0;34m
#define ANSI_COLOR_MAGENTA  \033[0;35m
#define ANSI_COLOR_RESET   \033[0m

void escreveVetor(int *vetor)
{
    int i;
    printf("\033[1;35m");printf("Vetor\n");printf("\033[0;0m");
    for(i=0; i<TAM; i++)
    {
        vetor[i]=rand()%LIM;
        printf("\033[0;33m");printf("%d ",vetor[i]);printf("\033[0;0m");
    }
    printf("\n\n");
}
void encontraMaior(int *vetor)
{
    int i,maior=0;

    for(i=0; i<TAM; i++)
    {
        if(vetor[i]>maior)
        {
            maior=vetor[i];
        }
    }
    printf("\tMaior: %d \n\n",maior);
}
void encontraMenor(int *vetor)
{
    int i,menor=TAM;

    for(i=0; i<TAM; i++)
    {
        if(vetor[i]<menor)
        {
            menor=vetor[i];
        }
    }
    printf("\tMenor: %d \n\n",menor);
}
void mediaAritmetica(int *vetor)
{
    int i,media=0,soma=0;

    for(i=0; i<TAM; i++)
    {
        soma+=vetor[i];
    }
    media=(soma/(TAM-1));
    printf("\tMedia Aritmetica: %d \n\n",media);

}
void pares(int *vetor)
{
    int i,par=0;
    printf("\tNúmeros pares: ");
    for(i=0; i<TAM; i++)
    {
        if(vetor[i]%2==0)
        {
            printf("%d ",vetor[i]);
        }
    }
    printf("\n\n");
}
void impares(int *vetor)
{
        int i,impar=0;
    printf("\tNúmeros impares: ");
    for(i=0; i<TAM; i++)
    {
        if(vetor[i]%2!=0)
        {
            printf("%d ",vetor[i]);
        }
    }
    printf("\n\n");
}
void primos(int *vetor)
{
    int i,d,verifica=1,limite;

    printf("\tPrimos: ");
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
                printf("%d ", vetor[i]);
            }
        }
    }
    printf("\n\n");

}

int main(void)
{
    int vet[TAM];
    int i,j,aux,maior,count=0,escolha=0;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    system("color");

    escreveVetor(&vet);
    printf("\033[0;35m");printf("\tESCOLHA O QUE DESEJA:\n");printf("\033[0m");
    printf("\t1 - Maior Valor\n\t2 - Menor Valor\n\t3 - Media Aritmetica\n\t4 - Valores Pares\n\t5 - Valores Impares\n\t6 - Valores Primos\n\t7 - Sai do Programa\n\tSe nenhum foi selecionado = ");
    printf("\033[1;31m");printf("AUTO-DESTRUIÇÃO\n\n");printf("\033[0;0m");

    do{
    printf("\033[0;33m");printf("\tOpcao: ");printf("\033[0;0m");
    scanf("\t%d",&escolha);

        switch(escolha)
        {
            case 1: encontraMaior(&vet);        //a)
            break;

            case 2: encontraMenor(&vet);        //b)
            break;

            case 3: mediaAritmetica(&vet);      //c)
            break;

            case 4: pares(&vet);                //d)
            break;

            case 5: impares(&vet);              //e)
            break;

            case 6: primos(&vet);               //f)
            break;

            case 7: exit(0);
            break;

        }
    }while(escolha<8);

    printf("\033[1;31m");
    printf("\tNenhum Selecionado. Iniciando a auto-destruicao!\n\n");
    system("pause");
    printf("\n\t\tTo falando serio!\n\n");
    system("pause");
    printf("\n\t\t\tÉ agora hein\n\n");
    system("pause");
    printf("\033[0;0m");
    printf("\ncapaz\n\n");

}
