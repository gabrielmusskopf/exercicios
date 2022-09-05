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

    int X[25];
    int z=0,y=1;
   for(z=0;z<25;z++)
{
    printf("Digite o %d  valor de a:",y);
    scanf("%d",&X[z]);    y++;
}
    system("cls");

for(z=0;z<25;z++)
{
printf("X[%d]=%d\n",z,X[z]);
}

    printf("\nX[25] reescrito:\n");

   for(z=0;z<25;z++)
{
    if(X[z]==0) X[z]=1;
    printf("X[%d]=%d\n",z,X[z]);
    y++;
}
    system("pause");
}

