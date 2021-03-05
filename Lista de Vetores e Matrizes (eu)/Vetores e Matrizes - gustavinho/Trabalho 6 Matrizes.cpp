#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <time.h>

int main(void)
{
    system("cls");
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    int a[5][5],SL[5]={0,0,0,0,0};
    int SC[5]={0,0,0,0,0};
    int z=0,x=0,y=1,b=0,c=0,t=0,d=0,f=0;

   for(z=0;z<5;z++)
{
    for(x=0;x<5;x++)
{

    printf("Digite o  valor de a[%d][%d]:",z,x);
    scanf("%d",&a[z][x]);
}}

    for(z=0;z<5;z++)
{    printf("\n\t");

    for(x=0;x<5;x++)
    printf("%d\t",a[z][x]);

}
    printf("\n");
    printf("\n");


    for(z=0;z<5;z++)
{
    for(x=0;x<5;x++)
{
    SL[z]+=a[z][x];
}}
    printf("Soma das linhas:\n");

    for(z=0;z<5;z++)
{   printf("%d\t",SL[z]);
}
    printf("\n");
    printf("\n");

    for(z=0;z<5;z++)
{


    for(x=0;x<5;x++)
{
    SC[z]+=a[x][z];
}

}
    printf("Soma das colunas:\n");

 for(z=0;z<5;z++)
{    printf("%d\t",SC[z]);
}
    printf("\n");
    printf("\n");


    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
}

