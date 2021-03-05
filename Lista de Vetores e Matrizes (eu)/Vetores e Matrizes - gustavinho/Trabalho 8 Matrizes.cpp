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

    int a[6][6];
    int g[6][6];
    int b[6][6];

    int z=0,x=0,y=0,c=0,t=0,d=0,f=0;

   for(z=0;z<6;z++)
{
    for(x=0;x<6;x++)
{

    printf("Digite o  valor de a[%d][%d]:",z,x);
    scanf("%d",&a[z][x]);
}}

    for(z=0;z<6;z++)
{   for(x=3;x<6;x++)
{
    g[z][x-3]=a[z][x];
}
}
    for(z=0;z<6;z++)
{   for(x=0;x<3;x++)
{
    g[z][x+3]=a[z][x];

}
}


for(z=0;z<6;z++)
{   for(x=0;x<6;x++)
{
    b[z][x]=g[z][x];
}}

for(z=3;z<6;z++)
{   for(x=0;x<6;x++)
{
    b[z-3][x]=g[z][x];
}
}

for(z=0;z<3;z++)
{   for(x=0;x<6;x++)
{
    b[z+3][x]=g[z][x];
}
}


            //************************************//
           //************************************//
          //****************FINAL***************//
         //************************************//
        //************************************//


    for(z=0;z<6;z++)
{    printf("\n\t");

    for(x=0;x<6;x++)
{
        printf("%d\t",a[z][x]);

}
}
    printf("\n");
    printf("\n");

for(z=0;z<6;z++)
{    printf("\n\t");

    for(x=0;x<6;x++)
{
        printf("%d\t",b[z][x]);

}
}
    printf("\n");
    printf("\n");


    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
}

