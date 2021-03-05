/*
Escreva um programa que receba dia, mês e ano para dois structs do tipo dma,
cada um representando uma data válida.
Calcule e escreva o número de dias que decorreram entre as duas datas.
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

struct dma_inicial{
    int dia;
    int mes;
    int ano;
}typedef dma_inicial;

struct dma_final{
    int dia;
    int mes;
    int ano;
}typedef dma_final;

int main(void)
{
    dma_inicial data_inicial;
    dma_final data_final;
    int i;
    float dias,meses,anos,total;


    printf("Qual o dia inicial?\t");
    scanf("%d",&data_inicial.dia);
    if(data_inicial.dia>31 || data_inicial.dia<0)
    {
        printf("\nData inexistente!\n");
        return 0;
    }

    printf("\nQual o mes inicial?\t");
    scanf("%d",&data_inicial.mes);
    if(data_inicial.mes>12 || data_inicial.mes<0)
    {
        printf("\nData inexistente!");
        return 0;
    }

    printf("\nQual o ano inicial?\t");
    scanf("%d",&data_inicial.ano);
    if(data_inicial.ano<0)
    {
        printf("\nData inexistente no nosso calendario!");
        return 0;
    }


    printf("\n\nQual dia final?\t");
    scanf("%d",&data_final.dia);
    if(data_final.dia>31 || data_final.dia<0)
    {
        printf("\nData inexistente!\n");
        return 0;
    }

    printf("\nQual mes final?\t");
    scanf("%d",&data_final.mes);
    if(data_final.mes>12 || data_final.mes<0)
    {
        printf("\nData inexistente!\n");
        return 0;
    }

    printf("\nQual ano final?\t");
    scanf("%d",&data_final.ano);
    if(data_final.ano<0)
    {
        printf("\nData inexistente no nosso calendario!\n");
        return 0;
    }

    dias=(data_final.dia)-(data_inicial.dia);
        //if(dias<0){ dias*=(-1); }
    meses=(data_final.mes)-(data_inicial.mes);
        //if(meses<0){ meses*=(-1); }
    anos=(data_final.ano)-(data_inicial.ano);
        //if(anos<0){ anos*=(-1); }

    total=dias+(meses*30)+(anos*365);

    if(total<0){ total*=(-1); }

    printf("\nQuantidade de dias entre as datas: %.2f\n",total);


}
