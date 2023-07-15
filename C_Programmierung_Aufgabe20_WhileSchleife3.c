// ML_01_05_02_performant

#include <stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    float x,y=0;
    float quotient;

	printf("Geben Sie bitte eine erste Kommazahl ein:  ");
	fflush(stdin);
	scanf("%f",&x);

	while(y==0)
    {
         printf("Geben Sie bitte eine zweite Kommazahl ein:  ");
         fflush(stdin);
         scanf("%f",&y);

         if(y==0)
         {
             printf("Durch 0 teilen ist nicht zulässig!\n\n");
         }
    }

    quotient=x/y;
    printf("\n\nAusgabe:\nDer Quotient aus %f und %f ist: %f",x,y,quotient);

    printf("\n\n\n\n");
    system("pause");
}
