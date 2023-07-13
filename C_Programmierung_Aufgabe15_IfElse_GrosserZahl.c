// ML(FPA)_01_04_01

#include <stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    int a;
    int b;

	printf("Geben Sie bitte eine erste ganze Zahl ein:  ");
	fflush(stdin);
	scanf("%d",&a);
	printf("Geben Sie bitte eine zweite ganze Zahl ein: ");
	fflush(stdin);
	scanf("%d",&b);
    if(a>=b)
    {
        printf("Das Maximum aus %d und %d ist %d",a,b,a);
    }
    else
    {
        printf("Das Maximum aus %d und %d ist %d",a,b,b);
    }

    printf("\n\n\n");
}
