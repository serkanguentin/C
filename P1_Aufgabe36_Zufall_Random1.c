#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>


main()
{
    system("chcp 1252");
    system("cls");

    srand(time(NULL));
    rand();

    int eingabe, min, max, anzahl, zuf, i;


    printf ("Bitte geben Sie das Minimum ein: ");
    scanf ("%d", &min);
    fflush(stdin);

    printf ("Bitte geben Sie das Maximum ein: ");
    scanf ("%d", &max);
    fflush(stdin);

    printf ("Bitte geben Sie die Anzahl der Durchläufe ein: ");
    scanf ("%d", &anzahl);
    fflush(stdin);

    for (i=0;i<anzahl;i++)
    {
        zuf= rand()%(max-min+1)+min; // max-min+1 berechnet die Anzahl der Werte zwischen min und max (einschließlich min und max)
        printf ("%d ",zuf);
    }

    printf("\n\n\n");
    system("pause");
}
