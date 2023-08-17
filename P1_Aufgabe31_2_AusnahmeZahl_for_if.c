#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp.com 1252");
    system("cls");

    int i,ausnahme;

    printf("Geben Sie bitte an, welche der Zahlen von 1 bis 100 NICHT ausgegeben werden soll: ");
    fflush(stdin);
    scanf("%d",&ausnahme);

    for(i=1;i<ausnahme;i++)
    {
        printf("%d ",i);
    }

    for(i=ausnahme+1;i<100;i++)
    {
        printf("%d ",i);
    }

    printf("\n\n\n");
    system("pause");
}
