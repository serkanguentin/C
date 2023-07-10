// ML_01_03_01

#include <stdio.h>

main()
{
	float rechteckBreite; // Der User könnte auch Kommawerte eingeben wollen
	float rechteckHoehe;
	float rechteckFlaeche;

	// Eingaben
	printf("Geben Sie bitte die Breite des Rechteckes ein: ");
	fflush(stdin); // Aus didaktischen Gründen erscheint es sinnvoll, fflush immer zu setzen (um es nicht zu vergessen, wo es nötig ist)
	scanf("%f",&rechteckBreite);

	printf("Geben Sie bitte die Hoehe des Rechteckes ein: ");
	fflush(stdin); // ab dem zweiten scanf ist es nötig (auch, wenn es manchmal auch ohne "gut geht" - aber wir wollen uns natürlich nicht auf unser Glück verlassen)
	scanf("%f",&rechteckHoehe);

	// Verarbeitung
	rechteckFlaeche=rechteckBreite*rechteckHoehe;

	// Ausgabe
	printf("Die Flaeche des Rechteckes betraegt: %f\n\n\n",rechteckFlaeche);
}
