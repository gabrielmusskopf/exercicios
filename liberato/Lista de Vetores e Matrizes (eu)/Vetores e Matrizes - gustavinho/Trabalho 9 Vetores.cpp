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

    int X[50];
    int z=0,y=1,b=0,c=0,e=0,f=0,g=0,B=0,C=0,i=0,p=0;
    float d=0;
   for(z=0;z<50;z++)
{
    printf("Digite o %d  valor de a:",y);
    scanf("%d",&X[z]);    y++;
}
    y=1;
    for(z=0;z<50;z++)
{
    printf("X[%d]=%d\n",y,X[z]);
    y++;
}
    printf("\n");

b=X[0];
c=X[0];
    for(z=0;z<50;z++)
{
    if(b<X[z]) {b=X[z];  B=z;}
    if(c>X[z]) {c=X[z];  C=z;}
    d+=X[z];
    if(X[z]>0)
{
    if(X[z]%2==0) p++;
    else{i++;}
}
}
d=d/50;
B++;
C++;
    printf("Maior valor:%d\tPosição:%d\n",b,B);
    printf("Menor valor:%d\tPosição:%d\n",c,C);
    printf("Media dos valores:%.2f\n",d);
    printf("Quantidade de pares:%d\n",p);
    printf("Quantidade de impares:%d\n",i);
    printf("Numeros primos e posicao\n");
for(z=0;z<50;z++)
{
    e=0;
    for(f=1;f<=X[z];f++)
    {
    g=X[z]%f;
    if(g==0) e++;

    }

    y=z+1;
    if(e==2)  printf("%d\t%d\n",X[z],y);
}
system("pause");
}

