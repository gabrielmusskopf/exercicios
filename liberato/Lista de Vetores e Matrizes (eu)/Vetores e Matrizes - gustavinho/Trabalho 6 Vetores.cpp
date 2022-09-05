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

    int X[100];
    int z=0,y=1;
   for(z=0;z<100;z++)
{
    printf("Digite o %d  valor de a:",y);
    scanf("%d",&X[z]);    y++;
}
    y--;

   for(z=99;z>=0;z--)
{
    printf("X[%d]=%d\n",y,X[z]);
    y--;
}
    system("pause");
}

