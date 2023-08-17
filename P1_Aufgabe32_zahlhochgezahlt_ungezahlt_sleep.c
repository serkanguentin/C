#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp.com 1252");
    system("cls");

    int i,sprung=1;

    for(i=1;;i=i+sprung) // Alternativ zum Weglassen der Bedingung könnte man auch eine Bedingung formulieren, die stets zutrifft: (z.B.) 1==1, oder einfach eine belibige ganze Zahl außer 0
    {
        printf("%d ",i);
        Sleep(500);
        if(i==10)
        {
            sprung=-1;
        }
        if(i==1)
        {
            sprung=1;
        }
    }

    printf("\n\n\n");
    system("pause");
}
