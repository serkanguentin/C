// ML_01_05_02_kurz

#include <stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    char c;
    int i;
    int auswahl;
    int zaehler=0;

	printf("Geben Sie bitte ein Zeichen ein:  ");
	fflush(stdin);
	scanf("%c",&c);
	printf("Geben Sie bitte eine Anzahl ein:  ");
	fflush(stdin);
	scanf("%d",&i);
	printf("\nWählen Sie bitte bzg. der Ausgabe-Form:\n");
	printf("(1) Auswahl nebeneinander\n");
	printf("(2) Auswahl übereinander\n");
	printf("Ihre Auswahl: ");
	fflush(stdin);
	scanf("%d",&auswahl);

    printf("\n");
    while(zaehler<i)
    {
        printf("%c",c);
        if(auswahl==2)
        {
            printf("\n");
        }
        zaehler=zaehler+1;
    }

    printf("\n\n\n");
    system("pause");
}
