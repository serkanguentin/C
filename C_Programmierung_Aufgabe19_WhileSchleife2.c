#include <stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    float f1,f2;
    char nochmal='j';

    while(nochmal=='j')
    {
        printf("Geben Sie bitte eine erste Kommazahl ein: ");
        fflush(stdin);
        scanf("%f",&f1);

        printf("Geben Sie bitte eine zweite Kommazahl ein: ");
        fflush(stdin);
        scanf("%f",&f2);

        printf("Das Produkt aus %f und %f lautet: %.2f (auf 2 Nachkommastellen gerundet)",f1,f2,f1*f2);

        printf("\n\nMöchten Sie nochmal? (j/n) -> ");
        fflush(stdin);
        scanf("%c",&nochmal);
    }

    printf("\n\n\n");
    system("pause");
}
