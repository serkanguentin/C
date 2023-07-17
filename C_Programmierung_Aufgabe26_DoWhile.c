#include<stdio.h>

main()
{
    system("chcp 1252");

    int geheimNummer,kontrolle;

    do
    {
        system("cls");
        printf("Geben Sie bitte eine neue (ganzzahlige) Geheimnummer ein: ");
        fflush(stdin);
        scanf("%d",&geheimNummer);

        printf("Bestätigen Sie bitte Ihre Eingabe: ");
        fflush(stdin);
        scanf("%d",&kontrolle);
    }
    while(geheimNummer!=kontrolle);

    printf("Die neue Geheimnummer lautet: %d\n\n\n",geheimNummer);

    system("pause");
}
