#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp.com 1252");
    system("cls");

    int i;
    char antwort;

    printf("***********************************************************************\n");
    printf("Es startet eine Schleife, die \"eigentlich\" von 1 bis 5 laufen würde ...\n");
    printf("***********************************************************************\n");
    for(i=1;i<=5;i++) // Alternativ zum Weglassen der Bedingung könnte man auch eine Bedingung formulieren, die stets zutrifft: (z.B.) 1==1, oder einfach eine belibige ganze Zahl außer 0
    {
        printf("\nAktueller Zählerwert: %d\n",i);

        printf("Möchten Sie den Zählerwert ändern? (j/n) -> ");
        fflush(stdin);
        scanf("%c",&antwort);

        if(antwort=='j')
        {
            printf("Geben Sie bitte den gewünschten Zählerwert ein: ");
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
