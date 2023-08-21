#include <stdio.h>
#include <windows.h>

main()
{
    system("chcp.com 1252");
    system("cls");

    int i,breite;
    char zeichen;

    printf("VORBEMERKUNG: Die folgende Treppe wird 3 Stufen haben.\n");
    printf("Bestimmen Sie bitte, wie breit eine Stufe sein soll: ");
    fflush(stdin);
    scanf("%d",&breite);

    // Die folgende Vorgehensweise ist extrem aufwendig und stellt daher eine Motivation dafür da, dass wir uns später mit ...
    // a) komplexen boolschen Ausdrücken und
    // b) verschachtelten Schleifen befassen werden
    printf("\n");
    for(i=0;i<6*breite;i++)
    {
        // Entscheidung, welches Zeichen zu verwenden ist
        zeichen='*';
        if(i>=breite)
        {
            zeichen=' ';
        }
        if(i>=2*breite)
        {
            zeichen='*';
        }
        if(i>=3*breite)
        {
            zeichen=' ';
        }
        if(i>=5*breite)
        {
            zeichen='*';
        }

        // Entscheidung, ob ein Umbruch gesetzt werden muss
        if(i==breite)
        {
            printf("\n");
        }
        if(i==3*breite)
        {
            printf("\n");
        }

        // Ausgabe des Zeichens
        printf("%c",zeichen);
    }


    printf("\n\n\n");
    system("pause");
}
