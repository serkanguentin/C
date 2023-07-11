// ML_01_04_01

#include <stdio.h>

main()
{

	int alter;

	printf("Geben Sie bitte Ihr Alter ein: ");
	fflush(stdin);
	scanf("%d",&alter);

    if(alter>17)
    {
        printf("In Deutschland gelten Sie als volljaehrig\n\n\n");
    }
    else
    {
        printf("In Deutschland gelten Sie noch nicht als volljaehrig\n\n\n");
    }
}
