//ML_01_04_03

#include<stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252"); // Mit diesem Befehl ("CHangeCodePage") wird die Codepage 1252 ausgew�hlt.
                         // In dieser Codepage befinden sich (wie in allen anderen Codepages) jeweils 256 unterschiedliche Zeichen
                         // Wir w�hlen die Codepage 1252, da wir in dieser auch die Umlaute (�,�,�), � und das Euro-Zeichen(�) vorfinden
		         // Nach dem Aufruf erscheint allerdings auf der Konsole "Aktive Codepage: 1252" ...

                         //                  **********************************************************************
			 //                  *  MERKREGEL f�r 1252: "Das Jahr hat 12 Monate, bzw. 52 Wochen :-)"  *
                         //                  **********************************************************************

    system("cls");       //  ... dies k�nnen wir durch cls ("CLearScreen"=L�sche den Bildschirm) r�ckg�ngig machen   

    char b1;
    char b2;
    int auswahl;

    printf("Geben Sie bitte einen ersten Buchstaben ein:  ");
    fflush(stdin);
    scanf("%c",&b1);
    printf("Geben Sie bitte einen zweiten Buchstaben ein: ");
    fflush(stdin);
    scanf("%c",&b2);
    printf("\nW�hlen Sie bitte aus ...\n");
    printf("(1) f�r Ausgabe nebeneinander\n");
    printf("(2) f�r Ausgabe �bereinander\n");
    printf("Ihre Auswahl: ");
    fflush(stdin);
    scanf("%d",&auswahl);

    if(auswahl==1)
    {
        printf("\nAusgabe:\n%c%c",b1,b2);
    }
    else
    {
        printf("\nAusgabe:\n%c\n%c",b1,b2);
    }

    printf("\n\n\n");
}
