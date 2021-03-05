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

    int X[20],CX[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int z=0,y=1,b=0,c=0;

   for(z=0;z<20;z++)
{
    printf("Digite o %d  valor de a:",y);
    scanf("%d",&X[z]);    y++;
}
    y=1;
   for(z=0;z<20;z++)
{
    printf("X[%d]=%d, ",y,X[z]);
    y++;
}
    printf("\n");
    printf("\n");

    for(z=0;z<20;z++)
{
b=0;
    for(c=0;c<20;c++)
{
    if(X[z]==X[c])
    b++;
}
    CX[z]=b;
}

    y=1;
    for(z=0;z<20;z++)
{
    printf("X[%d]=%d\t\tEste valor aparece:%d vezes\n",y,X[z],CX[z]);
    y++;
}
    system("pause");
}

