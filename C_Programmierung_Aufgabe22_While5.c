#include <stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    int gesamt=0;
    int treffer=0;
    int zahl1;
    int zahl2;
    int summe;

    char nochmal='j';

    while(nochmal=='j')
    {
        printf("Geben Sie bitte eine erste Ganzzahl ein: ");
        fflush(stdin);
        scanf("%d",&zahl1);

        printf("Geben Sie bitte eine zweite Ganzzahl ein: ");
        fflush(stdin);
        scanf("%d",&zahl2);

        printf("Geben Sie bitte die Summe von %d und %d an: ",zahl1,zahl2);
        fflush(stdin);
        scanf("%d",&summe);

        if(summe==zahl1+zahl2)
        {
            printf("Richtig!\n\n");
            treffer=treffer+1;
        }
        else
        {
            printf("Leider falsch!\n\n");
        }

        gesamt=gesamt+1;

        printf("\n\nMöchten Sie nochmal? (j/n) -> ");
        fflush(stdin);
        scanf("%c",&nochmal);
    }

    printf("Bei insgesamt %d Versuchen lagen Sie %d-mal richtig.",gesamt,treffer);

    printf("\n\n\n");
    system("pause");
}
