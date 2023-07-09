// ML(FPA)_01_02_02

#include<stdio.h>


main()
{
    float kapital=100;
    int jahr=1;
    float prozentsatz=3;

    printf("Das Startkapital betraegt: %.2f Euro\n",kapital);

    kapital=kapital*(100+prozentsatz)/100;
    printf("Kapital nach %d Jahr(en): %.2f\n",jahr,kapital);

    kapital=kapital*(100+prozentsatz)/100;
    jahr=jahr+1;
    printf("Kapital nach %d Jahr(en): %.2f\n",jahr,kapital);

    kapital=kapital*(100+prozentsatz)/100;
    jahr=jahr+1;
    printf("Kapital nach %d Jahr(en): %.2f\n",jahr,kapital);

    kapital=kapital*(100+prozentsatz)/100;
    jahr=jahr+1;
    printf("Kapital nach %d Jahr(en): %.2f\n",jahr,kapital);

    kapital=kapital*(100+prozentsatz)/100;
    jahr=jahr+1;
    printf("Kapital nach %d Jahr(en): %.2f\n",jahr,kapital);
}
