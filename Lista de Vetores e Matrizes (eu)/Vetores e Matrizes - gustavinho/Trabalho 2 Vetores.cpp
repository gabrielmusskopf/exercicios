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

    int a[13];
    int b[13];
    int c[26];
    int z=0,y=1,f=0,g=1,x=0;

    for(z=0;z<13;z++)
{
    printf("Digite o %d  valor de a:",y);
    scanf("%d",&a[z]);
    printf("Digite o %d  valor de b:",y);
    scanf("%d",&b[z]);


    y++;
}

    for(z=0;z<13;z++)
{
    c[f]=a[z];
    f++; f++;
    c[g]=b[z];
    g++; g++;
}
    f=0;
    for(x = 1; x < 27; ++x)
    for(y = 26; y >= x; --y) {
      if(c[ y - 1] > c[ y ]) {
        f = c[ y - 1];
        c[ y - 1] = c[ y ];
        c[ y ] = f;
      }
    }




    for(z=0;z<26;z++)
{
    printf("%d\n",c[z]);
}

printf("\n");

    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
}

