#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp.com 1252");
    system("cls");

    int i;
    char antwort;

    printf("***********************************************************************\n");
    printf("Es startet eine Schleife, die \"eigentlich\" von 1 bis 5 laufen w�rde ...\n");
    printf("***********************************************************************\n");
    for(i=1;i<=5;i++) // Alternativ zum Weglassen der Bedingung k�nnte man auch eine Bedingung formulieren, die stets zutrifft: (z.B.) 1==1, oder einfach eine belibige ganze Zahl au�er 0
    {
        printf("\nAktueller Z�hlerwert: %d\n",i);

        printf("M�chten Sie den Z�hlerwert �ndern? (j/n) -> ");
        fflush(stdin);
        scanf("%c",&antwort);

        if(antwort=='j')
        {
            printf("Geben Sie bitte den gew�nschten Z�hlerwert ein: ");
            fflush(stdin);
            scanf("%d",&i);
        }
    }

    printf("\n***********************************************************************\n");
    printf("           Die Schleife wurde beendet ... Auf Wiedersehen!\n");
    printf("***********************************************************************\n");

    printf("\n\n\n");
    system("pause");
}
