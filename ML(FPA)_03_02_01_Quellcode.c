#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int zufallSuche(int a, int b, int s)
{
    int i=0,zuf;

    do
    {
        zuf=rand()%(b-a+1)+a;
        i++;
    }
    while(zuf!=s);

    return i;
}


int main(void)
{
    system("chcp.com 1252");
    system("cls");
    srand(time(NULL));
    rand();

    int i,a,b,c,anzahl;

    printf("Geben Sie bitte eine erste  ganze Zahl ein: ");
    fflush(stdin);
    scanf("%d",&a);

    printf("Geben Sie bitte eine zweite ganze Zahl ein: ");
    fflush(stdin);
    scanf("%d",&b);

    printf("Geben Sie bitte eine dritte ganze Zahl ein, die zwischen %d und %d liegt: ",a,b);
    fflush(stdin);
    scanf("%d",&c);

    printf("\nEs startet eine Schleife mit insgesamt 10 Durchläufen:\n");
    for(i=1;i<=10;i++)
    {
        anzahl=zufallSuche(a,b,c);
        printf("%d.Runde: Es wurden %d-mal Zahlen zwischen %d und %d ausgelost, bis %d getroffen wurde\n",i,anzahl,a,b,c);
    }

    printf("\n\n\n");
    system("pause");

    return 0;
}
