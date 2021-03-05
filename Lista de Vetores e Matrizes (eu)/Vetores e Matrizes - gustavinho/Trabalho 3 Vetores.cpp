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

    int a[30];
    int z=0,y=1,f=0,g=1,n=0,m=0;

    for(z=0;z<30;z++)
{
    printf("Digite o %d  valor de a:",y);
    scanf("%d",&a[z]);    y++;
}
    f=a[0];
    g=a[0];

    for(z=0;z<30;z++)
{
    if(f>a[z]){ f=a[z]; n=z+1;}
    if(g<a[z]){ g=a[z];m=z+1;}
}

    printf("Menor valor:%d\tPosicao:%d\n",f,n);
    printf("Maior valor:%d\tPosicao:%d\n",g,m);

    printf("\n");
    system("pause");
}

