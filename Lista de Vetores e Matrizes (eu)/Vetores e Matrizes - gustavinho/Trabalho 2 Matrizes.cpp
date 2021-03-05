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

    int a[6][6],A[36];
    int z=0,x=0,y=1,b=0,c=0,t=0,d=0,f=0;
   for(z=0;z<6;z++)
{
    for(x=0;x<6;x++)
{

    printf("Digite o  valor de a[%d][%d]:",z,x);
    scanf("%d",&a[z][x]);
}}

    for(z=0;z<6;z++)
{    printf("\n\t");

    for(x=0;x<6;x++)
    printf("%d\t",a[z][x]);

}
    printf("\n");
    printf("\n");

for(z=0;z<6;z++)
{    printf("\n\t");

    for(x=0;x<6;x++)
{   A[f]=a[z][x];
    f++;
}}

for(c = 1; c < 36; ++c)
    for(b = 35; b >= c; --b) {
      if(A[ b - 1] > A[ b ]) {
        t = A[ b - 1];
        A[ b - 1] = A[ b ];
        A[ b ] = t;
      }}

f=0;
    for(z=0;z<6;z++)
{
    for(x=0;x<6;x++)
{

   a[z][x]=A[f];
   f++;
}}

    for(z=0;z<6;z++)
{    printf("\n\t");

    for(x=0;x<6;x++)
{

    printf("%d\t",a[z][x]);

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

