#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

main()
{
    system("chcp.com 1252");
    system("cls");
    srand(time(NULL));
    rand();

    int i,max,x;

    x=rand()%100+1;
    max=x;

    for(i=1;i<10;i++)
    {
        x=rand()%100+1;
        printf("%d. Zufallszahl: %d\n",i,x);
        if(x>max)
        {
            max=x;
        }
    }

    printf("\nDas Maximum aller Zufalls-Zahlen ist: %d\n\n\n",max);
    system("pause");
}
