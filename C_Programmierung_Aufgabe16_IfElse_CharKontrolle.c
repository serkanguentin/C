// ML(FPA)_01_04_02

#include <stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    char a;
    char b;

	printf("Geben Sie bitte ein beliebiges Zeichen ein: ");
	fflush(stdin);
	scanf("%c",&a);
	printf("Geben Sie bitte nocheinmal das SELBE Zeichen ein: ");
	fflush(stdin);
	scanf("%c",&b);

    if(a==b)
    {
        printf("\nHervorragend! Sie scheinen mir ein echter Zeichensatz-Experte zu sein!");
    }
    else
    {
        printf("\nSind Sie sicher, dass %c und %c identische Zeichen sind?",a,b);
    }

    printf("\n\n\nDas Programm endet nun!\n\n\n");
}
