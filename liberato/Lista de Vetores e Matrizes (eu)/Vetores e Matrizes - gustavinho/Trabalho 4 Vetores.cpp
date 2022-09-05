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

    int A[10];
    int z=0,y=1;
   for(z=0;z<10;z++)
{
    printf("Digite o %d  valor de a:",y);
    scanf("%d",&A[z]);    y++;
}
y=1;
   for(z=0;z<10;z++)
{
    if(A[z]==10) printf("Numero igual a 10 na posicao: %d\n",y);
    y++;
}



    system("pause");
}

