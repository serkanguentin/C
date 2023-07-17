#include<stdio.h>
#include<windows.h>

main()
{
    system("chcp 1252");
    system("cls");

    char antwort;

    do
    {
        printf("Hallo\n");
        printf("Wollen Sie, dass ein weiteres mal Hallo ausgegeben wird? ");
        fflush(stdin);
        scanf("%c",&antwort);
    }
    while(antwort=='j');

        printf("Dann gibt es eben keine weitere Begrüßung mehr ... und tschööö!\n\n\n");

    system("pause");
}
