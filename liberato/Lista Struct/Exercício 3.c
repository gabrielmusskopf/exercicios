/*
Crie uma estrutura representando os alunos do curso de Elementos de Programação.
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota
da segunda prova e nota da terceira prova.
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
#define MAX 5

struct dados{

    int matricula;
    char nome[NOME];
    int nota1;
    int nota2;
    int nota3;

}typedef dados;

int main(void){

    dados alunos[MAX];
    int i,indice1,indice2,indice3;
    int maior_nota1=0;
    int maior_nota2=0;
    int maior_nota3=0;
    int media[MAX];
    float maior_media=0;
    int indice_media;
    float menor_media=100;
    int indice_media_menor;
    char result;


    //a. Permita ao usuário entrar com os dados de até 20 alunos;
    for(i=0; i<MAX; i++)
    {
        printf("Matricula: \t");
        scanf("%d",&alunos[i].matricula);

        printf("Nome: \t");
        fflush(stdin);
        gets(alunos[i].nome);

        printf("Nota Prova 1: \t");
        scanf("%d",&alunos[i].nota1);

        printf("Nota Prova 2: \t");
        scanf("%d",&alunos[i].nota2);

        printf("Nota Prova 3: \t");
        scanf("%d",&alunos[i].nota3);

        printf("\n");
    }

    //b. Exiba a matrícula, nome e nota do aluno com maior nota na primeira prova, na segunda prova e na terceira prova;

    for(i=0; i<MAX; i++)
    {
        if(alunos[i].nota1>maior_nota1)
        {
            maior_nota1=alunos[i].nota1;
            indice1=i;
        }
        if(alunos[i].nota2>maior_nota2)
        {
            maior_nota2=alunos[i].nota2;
            indice2=i;
        }
        if(alunos[i].nota3>maior_nota3)
        {
            maior_nota3=alunos[i].nota3;
            indice3=i;
        }

        media[i]=((alunos[i].nota1)+(alunos[i].nota2)+(alunos[i].nota3))/3;

        if(media[i]>maior_media)
        {
            maior_media=media[i];
            indice_media=i;
        }

        if(media[i]<menor_media)
        {
            menor_media=media[i];
            indice_media_menor=i;
        }
    }

    printf("\nAluno com maior nota 1: %s\t\tMatricula: %d\t\tNota %d\n",alunos[indice1].nome,alunos[indice1].matricula,alunos[indice1].nota1);
    printf("Aluno com maior nota 2: %s\t\tMatricula: %d\t\tNota %d\n",alunos[indice2].nome,alunos[indice2].matricula,alunos[indice2].nota2);
    printf("Aluno com maior nota 3: %s\t\tMatricula %d\t\tNota %d\n",alunos[indice3].nome,alunos[indice3].matricula,alunos[indice3].nota3);

    // c. Encontre e escreva o nome do aluno, sua notas e média para o aluno com maior média geral;

    printf("\nAluno com maior media: %s\t\tNota 1: %d\tNota 2: %d\tNota 3: %d\tMedia %.2f\n",alunos[indice_media].nome,alunos[indice_media].nota1,alunos[indice_media].nota2,alunos[indice_media].nota3,maior_media);

    //d. Encontre e escreva o nome do aluno, sua notas e média para o aluno com menor média geral;

    printf("Aluno com menor media: %s\t\tNota 1: %d\tNota 2: %d\tNota 3: %d\tMedia %.2f\n",alunos[indice_media_menor].nome,alunos[indice_media_menor].nota1,alunos[indice_media_menor].nota2,alunos[indice_media_menor].nota3,menor_media);

    //e. Para cada aluno, escreva seu nome e média e informe se ele foi aprovado ou reprovado, considerando média 6 para aprovação.

    printf("\n\n  Nome\tMedia\tA/R\n");

    for(i=0; i<MAX; i++)
    {
        if(media[i]>=6)
        {
            result='A';
        }
        else result='R';

        printf("%s\t %d\t%c\n",alunos[i].nome,media[i],result);

    }
}
