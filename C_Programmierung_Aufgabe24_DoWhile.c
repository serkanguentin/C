#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    int breite,hoehe,flaeche;
    int zaehler=0;

    printf("Geben Sie Bitte die Breite des Rechteckes ein: ");
    fflush(stdin);
    scanf("%d",&breite);

    printf("Geben Sie Bitte die Höhe des Rechteckes ein: ");
    fflush(stdin);
    scanf("%d",&hoehe);

    printf("\n");
    do
    {
        printf("Geben Sie Bitte die Fläche des Rechteckes ein: ");
        fflush(stdin);
        scanf("%d",&flaeche);

        zaehler=zaehler+1;
    }
    while(flaeche!=breite*hoehe);

    printf("\nSie haben %d Versuch(e) benötigt",zaehler);


    printf("\n\n\n");
    system("pause");
}
