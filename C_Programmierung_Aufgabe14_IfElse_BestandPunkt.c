//ML_01_04_04

#include<stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    float max;
    float punkte;
    float prozent;

    printf("Geben Sie bitte die maximal erreichbare Punktzahl ein:  ");
    fflush(stdin);
    scanf("%f",&max);
    printf("Geben Sie bitte die erreichte Punktzahl ein: ");
    fflush(stdin);
    scanf("%f",&punkte);

    prozent=(punkte/max)*100;

    if(prozent>=50)
    {
        printf("\nSie haben %.0f Prozent erreicht und bestanden.",prozent);
    }
    else
    {
        printf("\nSie haben %.0f Prozent erreicht und leider nicht bestanden.",prozent);
    }

    printf("\n\n\n");
}
