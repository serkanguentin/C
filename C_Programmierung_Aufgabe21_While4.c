// ML(FPA)_01_05_01

#include <stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    int countDown=-1; // Startwert um die Schleife mindestens 1-mal betreten zu können

    while(countDown<0)
    {
        printf("Geben Sie bitte den Startwert Ihres Countdowns ein!\n(Das System zählt dann runter bis auf 0, daraufhin startet die Mondrakete)\nIhre Eingabe: ");
        fflush(stdin);
        scanf("%d",&countDown);

        if(countDown<0)
        {
            printf("Das kann ja wohl nicht Ihr Ernst sein, oder?\n\n");
        }
    }

    printf("\nDer Countdown beginnt:\n");
    while(countDown>=0)
    {
        printf("%d\n",countDown);
        countDown=countDown-1;
    }
    printf("Die Rakte startet - Guten Flug!");

    printf("\n\n\n\n");
    system("pause");
}
