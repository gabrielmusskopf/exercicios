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

    int x[17];
    int y=1,z=0,b=0,f,d;
    for(z=0;z<17;z++)
{
    printf("Digite o %d  valor:",y);
    scanf("%d",&x[z]);

    y++;
}

    for(z=0;z<=17;z++)
{
    b=0;
    for(f=1;f<=x[z];f++)
    {
    d=x[z]%f;
    if(d==0) b++;

    }


    if(b==2)  printf("%d\t",x[z]);

}

printf("\n");
    system("pause");
    printf("Gay");

}

