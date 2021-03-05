#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <time.h>

    int IgualDiferente(int*p);

int main(void)
{
    system("cls");
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    int a[5][5];
    int *p;
    int z=0,x=0,y=0,b=0,c=0,t=0,d=0,f=0;

   for(z=0;z<5;z++)
{
    for(x=0;x<5;x++)
{
    printf("Digite o  valor de a[%d][%d]:",z,x);
    scanf("%d",&a[z][x]);
}}

    p=&a[0][0];

    puts("");
    IgualDiferente(p);



    puts("");
    puts("");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
    system("pause");
}



int IgualDiferente(int*p)
{
    int z=0,x=0,y=0,i=0,b=0,k=0;

    for(x=0;x<25;x++)
{
    y=*(p+x);
    b=0;
        for(z=0;z<25;z++)
    {       i=*(p+z);
            if(i==y)
        {
                b++;
        }

    }
        if(b>1)
    {
        for(k=0;k<25;k++)
            if(*(p+k)==y)
            *(p+k)=(-1);
    }

        i=*(p+x);
        printf("%d\n",i);

}



}

