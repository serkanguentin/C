#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    int user, summe=0;

    do
    {
        printf("Geben Sie bitte die Summe aller bisher von Ihnen in diesem Programm eingebenen (ganzen) Zahlen ein : ");
        fflush(stdin);
        scanf("%d",&user);

        summe=summe+user;
    }
    while(user!=summe-user);

    printf("\nGenau! .... Auf Wiedersehen!");

    printf("\n\n\n");
    system("pause");
}
