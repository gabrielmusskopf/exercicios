
/*
Elabore um programa que leia 50 valores para um vetor A e o escreve. Al�m da
leitura e escrita do vetor, o algoritmo deve ter:
a) Uma fun��o que encontre e escreva o maior valor e sua posi��o;
b) Uma fun��o que encontre e escreva o menor valor e sua posi��o;
c) Uma fun��o que calcula e retorna a m�dia aritm�tica dos valores lidos;
d) Uma fun��o que retorne quantos valores s�o pares;
e) Uma fun��o que retorne quantos valores s�o impares:
f) Uma fun��o que escreva todos os n�meros primos.
*/

/*
PLUS MENU COLORIDO DE OP�OES.
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
    printf("\tN�meros pares: ");
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
    printf("\tN�meros impares: ");
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
    printf("\033[1;31m");printf("AUTO-DESTRUI��O\n\n");printf("\033[0;0m");

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
    printf("\n\t\t\t� agora hein\n\n");
    system("pause");
    printf("\033[0;0m");
    printf("\ncapaz\n\n");

}
