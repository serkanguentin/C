// ML_01_03_02

#include <stdio.h>

main()
{
	int a=1;
	char zeichen1;
	char zeichen2;
	char zeichen3;

	printf("Geben Sie bitte das %d. Zeichen ein: ",a);
	fflush(stdin);
	scanf("%c",&zeichen1);

	a=a+1;
	printf("Geben Sie bitte das %d. Zeichen ein: ",a);
	fflush(stdin);
	scanf("%c",&zeichen2);

	a=a+1;
	printf("Geben Sie bitte das %d. Zeichen ein: ",a);
	fflush(stdin);
	scanf("%c",&zeichen3);

	printf("%c\n%c\n%c\n\n\n",zeichen1,zeichen2,zeichen3);
}
