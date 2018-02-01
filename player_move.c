#include "tick_tack_toe.h"




void player_move(char pl_brd[3][3],char *player,char *opponent) // function for player move
{
    int i,k;

    printf("\nCHOOSE NUMBER OF row AND collumn FOR YOUR MOVE number,number:\n");
    //printf("\nCURRENT RESULT:\n");
    printf("_____(1)(2)(3)\n");
    for( i = 0;i<3;i++)
        {
            printf("_(%i)_" ,i+1);
            for( k = 0;k<3;k++)
                {
                    printf("|%c|",pl_brd[i][k]);
                }
            printf("\n");
        }
    i=0;
    k=0;
    do
    {
        scanf(" %i,%i",&i,&k);
        getc(stdin); //PREVENTS PROGRAM FROM CRASHING
        if(pl_brd[i-1][k-1] !=95) //prevents from revriting moves
        {
                continue;
        }

        else if((i <= 3 && i >0) && (k <= 3 && k >0) )
        {
            break;
        }
    }while((i!=3 || i!=2|| i!=1) && (k!=3 || k!=2|| k!=1));

    printf("\n");

    if(*player == 'X')
    {
        pl_brd[i-1][k-1] = 'X';
    }
    else
    pl_brd[i-1][k-1] = 'O';
}
