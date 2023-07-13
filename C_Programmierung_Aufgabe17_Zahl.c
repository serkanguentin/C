// ML(FPA)_01_04_03

#include <stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    int a;

	printf("Geben Sie bitte eine ganze Zahl ein:  ");
	fflush(stdin);
	scanf("%d",&a);

	printf("\n");

	if(a<0)
    {
        printf("Ihre Eingabe %d ist eine negative Zahl\n",a);
    }
    if(a==0)
    {
        printf("Ihre Eingabe ist Null\n");
    }
    if(a>0)
    {
        printf("Ihre Eingabe %d ist eine positive Zahl\n",a);
    }
    if(a>10)
    {
        printf("Ihre Eingabe %d liegt sogar oberhalb von 10!\n",a);
    }

    printf("\n\n\n");
}
