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

    int X[30];
    int z=0,y=1,b=0,c=0,d=0;

   for(z=0;z<30;z++)
{
    printf("Digite o %d  valor de a:",y);
    scanf("%d",&X[z]);    y++;
}
    y=1;
    for(z=0;z<30;z++)
{
    printf("X[%d]=%d\n",y,X[z]);
    y++;
}

    for(z=0;z<30;z++)
{
    b=0;
    for(c=1;c<=X[z];c++)
{
    d=X[z]%c;
    if(d==0) b++;

}
    if(b==2) X[z]=0;
}

    y=1;
    for(z=0;z<30;z++)
{
    printf("X[%d]=%d\n",y,X[z]);
    y++;
}
system("pause");
}

