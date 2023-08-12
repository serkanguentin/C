#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp.com 1252");
    system("cls");

    int start;
    int anzahl;
    int zaehler=0;

    printf("Geben Sie bitte eine ganze Zahl größer als 1 ein: ");
    fflush(stdin);
    scanf("%d",&start);

    printf("Es wird nun demnächst eine Schleife starten, die pro Durchlauf Ihren Eingabewert durch 2 teilen wird (OHNE Rest!)\n");
    printf("Geben Sie bitte an, wie oft diese Schleife durchlaufen wird (die Schleife endet, wenn der Wert 0 erreicht wurde) -> ");
    fflush(stdin);
    scanf("%d",&anzahl);

    printf("\n");
    do
    {
        printf("%d-ter Durchlauf: %d geteilt durch 2 ergibt (ohne Rest) : %d\n",zaehler+1,start,start/2);
        start=start/2;
        zaehler=zaehler+1;
    }
    while(start>0);

    printf("\n");
    if(zaehler==anzahl)
    {
        printf("Kompliment!");
    }
    else
    {
        printf("Das war leider nix ...");
    }


    printf("\n\n\n");
    system("pause");
}
