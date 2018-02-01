#include "tick_tack_toe.h"


int start(void) // who is goint to start?
{
    int i=0;
    printf("\nWho starts first?\n");
    printf("\nMe(1)");
    printf("\nNot me(2)");

    do
    {
        scanf(" %i",&i);
        getc(stdin); //PREVENTS PROGRAM FROM CRASHING
    }while(i!=1 && i!=2);


    if(i==1)
        return 1;
    if(i==2)
        return 2;
    if(i==3)
        return 3;

    return 0;
}
