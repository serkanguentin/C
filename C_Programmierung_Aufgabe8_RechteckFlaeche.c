// ML_01_03_01

#include <stdio.h>

main()
{
	float rechteckBreite; // Der User k�nnte auch Kommawerte eingeben wollen
	float rechteckHoehe;
	float rechteckFlaeche;

	// Eingaben
	printf("Geben Sie bitte die Breite des Rechteckes ein: ");
	fflush(stdin); // Aus didaktischen Gr�nden erscheint es sinnvoll, fflush immer zu setzen (um es nicht zu vergessen, wo es n�tig ist)
	scanf("%f",&rechteckBreite);

	printf("Geben Sie bitte die Hoehe des Rechteckes ein: ");
	fflush(stdin); // ab dem zweiten scanf ist es n�tig (auch, wenn es manchmal auch ohne "gut geht" - aber wir wollen uns nat�rlich nicht auf unser Gl�ck verlassen)
	scanf("%f",&rechteckHoehe);

	// Verarbeitung
	rechteckFlaeche=rechteckBreite*rechteckHoehe;

	// Ausgabe
	printf("Die Flaeche des Rechteckes betraegt: %f\n\n\n",rechteckFlaeche);
}
