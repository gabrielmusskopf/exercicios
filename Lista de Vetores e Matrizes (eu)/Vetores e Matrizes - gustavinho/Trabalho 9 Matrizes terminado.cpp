#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

 for(;;)   {
    int m=0;

    system("cls");
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");


    int g[6][6];
    int b[6][6];

    int z=0,x=0,y=0,c=0,t=0,d=0,f=0,h=0,l=0;

    printf("Digite o  valor de linhas e colunas(quadrada nº de linhas = nº de colunas):");
    scanf("%d",&x);
    for(x;x>10||x<3;)
{
    printf("Digite o  valor novamente (entre 3 e 10):");
    scanf("%d",&x);

}
    int a[x][x];
    l=x;

    for(z=0;z<x;z++)
{   for(y=0;y<x;y++)
{
    a[z][y]=rand()%100;
}
}
        //MENU
        printf("\t\t1. Diagonal principal (DP)\n\t\t2. Diagonal secundária (DS)\n\t\t3. Elementos acima das diagonais\n\t\t4. Elementos abaixo das diagonais\n\t\t5. Elementos acima da DP e abaixo da DS\n\t\t6. Elementos abaixo da DP e acima da DS\n\t\t7. Todos os elementos da matriz\n\t\t8. Sair do programa\n\t\tSua escolha? ");
scanf("%d",&m);
t=m;
for(t;t>8||t<0;)
{
    if(t>8||t<0)
{
        printf("\t\tEscolha invalida, digite novamente:");
        scanf("%d",&m);
        t=m;
}}
d=0;
if(m==1)
{
for(f=0;f<x;f++)
{
d+=a[f][f];
}
printf("\nValor da diagonal principal: %d\n",d);
}
if(m==2)
{h=x-1;
    for(f=0;f<x;f++)
{
 d+=a[f][h];
h--;
}
printf("\nValor da diagonal secundária: %d\n",d);
}
if(m==3)
{h=1;
c=x-1;
    for(f=0;f<(x/2);f++)
{

    for(h=f+1;h<(c);h++)
        {
d+=a[f][h];

}c--;
}
printf("\nValor dos elementos acima das diagonais: %d\n",d);


}
if(m==4)
    {h=1;
c=0;
    for(f=l-1;f>(l/2);f--)
{

    for(h=f-1;h>(c);h--)
        {

d+=a[f][h];

}c++;
}
printf("\nValor dos elementos abaixo das diagonais: %d\n",d);


}
if(m==5){h=1;
c=0;
    for(f=l-1;f>(l/2);f--)
{

    for(h=f-1;h>(c);h--)
        {

d+=a[f][h];

}c++;
}

    printf("Valor dos elementos acima da DP e abaixo da DS: %d\n",d);
}
if(m==6)
    {h=1;
c=x-1;
    for(f=0;f<(x/2);f++)
{

    for(h=f+1;h<(c);h++)
        {
d+=a[h][f];

}c--;}
    printf("Valor dos elementos abaixo da DP e acima da DS: %d\n",d);
    }
if(m==7)
{
    for(f=0;f<x;f++)
{
    for(h=0;h<x;h++)
{
        d+=a[f][h];
}}
    printf("Valor de todos os elementos: %d\n",d);
}
if(m==8)
exit(0);
            //************************************//
           //************************************//
          //****************FINAL***************//
         //************************************//
        //************************************//

{
    for(z=0;z<x;z++)
{    printf("\n\t");

    for(y=0;y<x;y++)
{
        printf("%d\t",a[z][y]);

}
}
    printf("\n");
    printf("\n");
}



    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
}}

