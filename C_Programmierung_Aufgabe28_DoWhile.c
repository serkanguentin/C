#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    int gesamt;
    int summe=0;
    int summand;
    int zaehler=1;

    printf("Geben Sie bitte eine ganze positive Zahl ein: ");
    fflush(stdin);
    scanf("%d",&gesamt);

    printf("\n\n");

    do
    {
        printf("Geben Sie bitte den %d-ten (ganzzahligen, positiven) Summanden ein: ",zaehler);
        fflush(stdin);
        scanf("%d",&summand);

        summe=summe+summand;

        if(summe<gesamt)
        {
            printf("Zum angestrebten Gesamtwert fehlen noch: %d\n\n",gesamt-summe);
        }

        zaehler=zaehler+1;
    }
    while(summe<gesamt);

    if(summe==gesamt)
    {
        printf("\n\nSie haben den exakten Gesamtwert getroffen!");
    }
    else
    {
        printf("\n\nSie haben den Gesamtwert leider überboten :-(");
    }

    printf("\n\n\n");
    system("pause");
}
