#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp.com 1252");
    system("cls");

    int i,paare;

    printf("Geben Sie bitte die Anzahl der gewünschten Paare ein: ");
    fflush(stdin);
    scanf("%d",&paare);

    for(i=1;i<=paare;i++)
    {
        printf("%d und %d\n",i,2*paare+1-i);
    }

    printf("\n\n\n");
    system("pause");
}
