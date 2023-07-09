// ML(FPA)_01_02_01

#include<stdio.h>


main()
{
    float kantenlaengeKubus=3.75;
    float oberflaeche=6*kantenlaengeKubus*kantenlaengeKubus;
    float volumen=kantenlaengeKubus*kantenlaengeKubus*kantenlaengeKubus;

    printf("\n\n\t*************************************\n");
    printf("\t* Ergebnisse fuer Kantenlaenge %.2f *\n",kantenlaengeKubus);
    printf("\t*************************************\n\n");
    printf("\t\tOberflaeche: %.2f\n",oberflaeche);
    printf("\t\tVolumen:     %.2f\n\n\n",volumen);


}
