/*
Faça um programa que lê uma string e imprime a sua inversa. O protótipo da função
deve ser: void inverte(char *str);
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <string.h>

#define TAM_STRING 20
void inverte(char *str)
{
    int i,tam;

    tam=strlen(str);

    printf("\nString Invertida: ");
    for(i=tam; i>=0; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");

}

void printa(char *frase)
{
    int i;

    printf("\nString: ");
    for(i=0; i<TAM_STRING; i++)
    {
        printf("%c",frase[i]);
    }
    printf("\n");
}

int main(void){

    char frase[TAM_STRING];
    int i,j;

    printf("Digite uma frase: ");
    gets(frase);


    printa(&frase);
    int *pString=&frase;
    inverte(&frase);


}
