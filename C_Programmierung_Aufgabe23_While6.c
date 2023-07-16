// ML(FPA)_01_05_03

#include <stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    char buchstabe;
    int treffer=0;

    while(treffer<3)
    {
        printf("Geben Sie bitte den ersten Buchstaben des Wortes \"Eis\" ein: ");
        fflush(stdin);
        scanf("%c",&buchstabe);
        if(buchstabe=='E')
        {
            treffer=treffer+1;
        }

        printf("Geben Sie bitte den zweiten Buchstaben des Wortes \"Eis\" ein: ");
        fflush(stdin);
        scanf("%c",&buchstabe);
        if(buchstabe=='i')
        {
            treffer=treffer+1;
        }

        printf("Geben Sie bitte den dritten Buchstaben des Wortes \"Eis\" ein: ");
        fflush(stdin);
        scanf("%c",&buchstabe);
        if(buchstabe=='s')
        {
            treffer=treffer+1;
        }

        if(treffer<3)
        {
            printf("Leider waren nur %d von 3 Buchstaben korrekt\n\n",treffer);
            treffer=0;
        }
    }

    printf("Glückwunsch! Sie haben sage und schreibe alle 3 Buchstaben korrekt eingegeben!\n\n\n\n");
    system("pause");
}
