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

    printf("Geben Sie Bitte die H�he des Rechteckes ein: ");
    fflush(stdin);
    scanf("%d",&hoehe);

    printf("\n");
    do
    {
        printf("Geben Sie Bitte die Fl�che des Rechteckes ein: ");
        fflush(stdin);
        scanf("%d",&flaeche);

        zaehler=zaehler+1;
    }
    while(flaeche!=breite*hoehe);

    printf("\nSie haben %d Versuch(e) ben�tigt",zaehler);


    printf("\n\n\n");
    system("pause");
}
