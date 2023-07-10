// ML(FPA)_01_03_01

#include <stdio.h>

main()
{
	char var1Name;
	char var2Name;
	char var3Name;

	int var1;
	int var2;
	int var3;

	printf("Geben Sie bitte den Namen der ERSTEN  Variable an (Name darf nur aus einem einzigen Buchstaben bestehen): ");
	fflush(stdin);
	scanf("%c",&var1Name);

	printf("Geben Sie bitte den Namen der ZWEITEN Variable an (Name darf nur aus einem einzigen Buchstaben bestehen): ");
	fflush(stdin);
	scanf("%c",&var2Name);

	printf("Geben Sie bitte den Namen der DRITTEN Variable an (Name darf nur aus einem einzigen Buchstaben bestehen): ");
	fflush(stdin);
	scanf("%c",&var3Name);

	printf("\nGeben Sie bitte an, welche ganze Zahl die Variable %c abspeichern soll: ",var1Name);
	fflush(stdin);
	scanf("%d",&var1);

	printf("Geben Sie bitte an, welche ganze Zahl die Variable %c abspeichern soll: ",var2Name);
	fflush(stdin);
	scanf("%d",&var2);

	var3=var1+var2;
	printf("\n\tWenn %c+%c=%c",var1Name,var2Name,var3Name);
	printf("\n\tund  %c=%d",var1Name,var1);
	printf("\n\tund  %c=%d",var2Name,var2);
	printf("\n\tdann gilt: %c=%d\n\n\n",var3Name,var3);
}
