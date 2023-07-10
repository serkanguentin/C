// ML_01_03_03

#include <stdio.h>

main()
{
	int tag,monat,jahr; // Mehrere Variablen vom selben Typ können durch Komma getrennt in einer Zeile deklariert und definiert werden (auch Initialisierung pro Variable möglich)

	printf("Geben Sie bitte den Tag ein: ");
	fflush(stdin);
	scanf("%d",&tag);

	printf("Geben Sie bitte den Monat ein: ");
	fflush(stdin);
	scanf("%d",&monat);

	printf("Geben Sie bitte das Jahr ein: ");
	fflush(stdin);
	scanf("%d",&jahr);

	printf("\n\tDeutsche Datumsdarstellung: ......... %.2d.%.2d.%.4d\n",tag,monat,jahr);
	printf("\tAmerikanische Datumsdarstellung: .... %.4d-%.2d-%.2d\n\n\n",jahr,monat,tag);
}
