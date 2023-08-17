#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp.com 1252");
    system("cls");

    int i,anzahl;
    float laenge,breite,flaeche=0;

    printf("Geben Sie bitte an, wie viele Räume die Wohnung hat: ");
    fflush(stdin);
    scanf("%d",&anzahl);

    for(i=0;i<anzahl;i++)
    {
        printf("\nGeben Sie bitte die Länge von Raum %d ein: ",i+1);
        fflush(stdin);
        scanf("%f",&laenge);

        printf("Geben Sie bitte die Breite von Raum %d ein: ",i+1);
        fflush(stdin);
        scanf("%f",&breite);

        flaeche=flaeche+laenge*breite;
    }

    printf("\nDie Gesamtfläche der Wohnung beträgt: %.2f Quadratmeter",flaeche);

    printf("\n\n\n");
    system("pause");
}
