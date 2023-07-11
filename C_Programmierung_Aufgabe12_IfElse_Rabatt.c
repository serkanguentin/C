// ML_01_04_02

#include <stdio.h>

main()
{
	float einzelPreis;
	int anzahlPersonen;
	float gesamtPreis;

	printf("Geben Sie bitte den Einzelpreis pro Ticket ein (in Euro): ");
	fflush(stdin);
	scanf("%f",&einzelPreis);

	printf("Geben Sie bitte die Anzahl der Personen ein: ");
	fflush(stdin);
	scanf("%d",&anzahlPersonen);

    if(anzahlPersonen>4)
    {
        gesamtPreis=einzelPreis*anzahlPersonen*0.9;
    }
    else
    {
        gesamtPreis=einzelPreis*anzahlPersonen;
    }

    printf("Gesamtpreis: %.2f Euro\n\n\n",gesamtPreis);
}
