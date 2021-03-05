/*
Fazer um programa em C que lê a idade, sexo, cor dos olhos e
cabelo das pessoas que serão pesquisadas e, para finalizar esta digitação, a idade deverá ser igual 0.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>

#define NOME 50
#define PESSOAS 5

struct pesquisa{
    int idade;
    int sexo_masc;
    int sexo_fem;
    int olhos_azuis;
    int olhos_verdes;
    int olhos_castanhos;
    int cabelo_loiro;
    int cabelo_castanho;
    int cabelo_preto;
}typedef pesquisa;

int main(void)
{
    int anos,male=0,female=0,eye=0,hair=0,blue_eye=0,green_eye=0,brown_eye=0,blond_hair=0,brown_hair=0,black_hair=0;
    int idade_media=0;
    float porc_male=0,porc_female=0,porc_blueeye=0,porc_greeneye=0,porc_browneye=0,porc_blondhair=0,porc_brownhair=0,porc_blackhair=0;
    int female_blue_blond_20_30=0;
    int total_pessoas=0,idade_variavel=0,sexo_variavel=0,olhos_variavel=0,cabelo_variavel=0;
    pesquisa dados;
    dados.idade=0;
    dados.sexo_masc=0;
    dados.sexo_fem=0;
    dados.olhos_azuis=0;
    dados.olhos_verdes=0;
    dados.olhos_castanhos=0;
    dados.cabelo_loiro=0;
    dados.cabelo_castanho=0;
    dados.cabelo_preto=0;

    do{
        idade_variavel=0,sexo_variavel=0,olhos_variavel=0,cabelo_variavel=0;

        printf("Digite a idade:\t\t\t\t\t\t\t");
        scanf("%d",&idade_variavel);
        dados.idade=dados.idade+idade_variavel;

        if(idade_variavel==0){break;}
        if(idade_variavel<0)
        {
            printf("\nIdade invalida\n");
            return 0;
        }

        printf("Digite o sexo: Masculino(1)  Feminino(2)\t\t\t");
        scanf("%d",&sexo_variavel);

        if(sexo_variavel==1)
        {
            dados.sexo_masc++;
        }
        else if(sexo_variavel==2)
        {
            dados.sexo_fem++;

            if(dados.idade>20 && dados.idade<30)
            {
                if(olhos_variavel==1)
                {
                    if(cabelo_variavel==1)
                    {
                        female_blue_blond_20_30++;
                    }
                }
            }
        }
        else{ printf("\nSexo invalido\n");
                return 0; }

        printf("Digite a cor dos olhos: Azuis(1)  Verdes(2)  Castanhos(3)\t");
        scanf("%d",&olhos_variavel);

        if(olhos_variavel==1)
        {
            dados.olhos_azuis++;
        }
        else if(olhos_variavel==2)
        {
            dados.olhos_verdes++;
        }
        else if(olhos_variavel==3)
        {
            dados.olhos_castanhos++;
        }
        else { printf("\nCor invalida\n");
                return 0;}

        printf("Digite a cor do cabelo: Louro(1)  Castanho(2)  Preto(3)\t\t");
        scanf("%d",&cabelo_variavel);

        if(cabelo_variavel==1)
        {
            dados.cabelo_loiro++;
        }
        else if(cabelo_variavel==2)
        {
            dados.cabelo_castanho++;
        }
        else if(cabelo_variavel==3)
        {
            dados.cabelo_preto++;
        }
        else   { printf("\nCor invalida\n");
                    return 0; }

        total_pessoas++;

        idade_media=dados.idade/total_pessoas;   //ok

        porc_male=(dados.sexo_masc/total_pessoas)*100;
        porc_female=(dados.sexo_fem/total_pessoas)*100;
        porc_blueeye=(dados.olhos_azuis/total_pessoas)*100;
        porc_greeneye=(dados.olhos_verdes/total_pessoas)*100;
        porc_browneye=(dados.olhos_castanhos/total_pessoas)*100;
        porc_blondhair=(dados.cabelo_loiro/total_pessoas)*100;
        porc_brownhair=(dados.cabelo_castanho/total_pessoas)*100;
        porc_blackhair=(dados.cabelo_preto/total_pessoas)*100;



        printf("\n\n");
    }while(dados.idade!=0);
    printf("\nPesquisa terminada!\n");

    printf("\nTotal de pessoas pesquisadas:\t%d",total_pessoas);
    printf("\nMedia de idade:\t%d",idade_media);
    printf("\nPercentual  Homens:  %.2f %\tMulheres:  %.2f %",porc_male,porc_female);
    printf("\nPercentual  Cabelo Loiros:  %.2f %\tCastanhos:  %.2f %\tPretos:  %.2f %",porc_blondhair,porc_brownhair,porc_blackhair);
    printf("\nPercentual Olhos  Azuis:  %.2f %\tVerdes:  %.2f %\tCastanhos:  %.2f %",porc_blueeye,porc_greeneye,porc_browneye);
    printf("\nQuantidade de mulheres loiras de olho azul entre 20 e 30 anos:\t%d\n\n",female_blue_blond_20_30);

}

