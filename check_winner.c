#include "tick_tack_toe.h"



int check_winner(char tick[3][3]) //function for chcking winner
{

    int copy=0,draw =0,i,k;
    for(i = 0;i<3;i++) // checking horizontal
    {
            for(k = 0;k<3;k++)
            {
                copy +=tick[i][k];
                if(copy ==264) // 88*3 = 264 ,size of X ,X have own
                    return 1;
                else if(copy ==237) //  79*3 == 237  size of O , O have won
                    return 2;
            }
            copy = 0 ; //reset
    }
    for(i = 0;i<3;i++) // checking vertical
    {
        for(k = 0;k<3;k++)
        {
            copy +=tick[k][i];
            if(copy ==264) // 88*3 = 264 ,size of X ,X have own
                return 1;
            else if(copy ==237) //  79*3 == 237  size of O , O have won
                return 2;
        }
        copy = 0 ; //reset
    }
    k=0;
    i=0;
    while(k!=3)// checking bias from left to right
    {
        copy +=tick[k][i];
        k++;
        i++;
            if(copy ==264) // 88*3 = 264 ,size of X ,X have own
                return 1;
            else if(copy ==237) //  79*3 == 237  size of O , O have won
                return 2;

    }

    copy = 0 ; //reset
    k=2;
    i=0;
    while(i!=3)// checking bias from right to left
    {
        copy +=tick[i][k];
        k--;
        i++;
        if(copy ==264) // 88*3 = 264 ,size of X ,X have own
            return 1;
        else if(copy ==237) //  79*3 == 237  size of O , O have won
            return 2;
    }
    copy = 0 ; //reset
    i=0;
    k=0;
    for(i = 0;i<3;i++) // checking draw
    {
        for(k = 0;k<3;k++)
        {
            copy =tick[k][i];
            if(copy==95)
                draw = copy;
        }
    }
    if(draw==95)
    {
        return 0;
        draw=0;
    }
    return 3; //draw

}
