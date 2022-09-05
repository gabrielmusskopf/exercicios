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

    int a[6][6],A[12]={0,0,0,0,0,0,0,0,0,0,0,0};
    int z=0,x=0,y=1,b=0;
    float d=0;
   for(z=0;z<6;z++)
{
    for(x=0;x<6;x++)
{

    printf("Digite o  valor de a[%d][%d]:",z,x);
    scanf("%d",&a[z][x]);;
}}
    y=1;
    for(z=0;z<6;z++)
{    printf("\n");

    for(x=0;x<6;x++)
    printf("%d\t",a[z][x]);

}
    printf("\n");
    printf("Soma das linhas:\n");

    b=1;
    y=0;
    for(z=0;z<6;z++)
{


    for(x=0;x<6;x++)
{
    A[y]+=a[z][x];

}

    printf("Linha %d : %d\n",b++,A[y]);
    y++;
}
    printf("Soma das colunas:\n");

    b=1;
    for(x=0;x<6;x++)
{


    for(z=0;z<6;z++)
{
    A[y]+=a[z][x];

}

    printf("Coluna %d : %d\n",b++,A[y]);
    y++;
}
    system("pause");
}

