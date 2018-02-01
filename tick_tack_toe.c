
#include <stdio.h>
#include "tick_tack_toe.h"
#include <time.h>
#include <stdlib.h>


//FUNCTIONS
void tick_tack(void)
{

    struct
    {
        char player;
        char opponent;
        char exit;
        int first_player;
        int check_result;
    }game;
    char pl_brd[3][3] ={{'_','_','_'},{'_','_','_'},{'_','_','_'}}; // size of playing board
    game.check_result = 0;

    printf("\nCHOOSE \"X\" OR \"O\" \n");
    do //choosing X or O
    {
        scanf(" %c",&game.player);

        switch(game.player)
        {
            case 'X':
            game.opponent = 'O';
            break;
            case 'O':
            game.opponent = 'X';
            break;
            default:
            break;
        }

    }while((game.player!='X') && (game.player!='O'));

    game.first_player = start();  // choosing who starts

    while(1) //loop of the game
    {
        if(game.first_player ==1)
        {
            player_move(pl_brd,&game.player,&game.opponent); // player move
            game.check_result=check_winner(pl_brd);
            check_2(game.check_result,pl_brd,game.exit);
            computer_move(pl_brd,&game.first_player,game.player,game.opponent);
            game.check_result=check_winner(pl_brd);
            check_2(game.check_result,pl_brd,game.exit);
        }
        else if(game.first_player ==2)
        {
            computer_move(pl_brd,&game.first_player,game.player,game.opponent);
            game.check_result=check_winner(pl_brd);
            check_2(game.check_result,pl_brd,game.exit);
            player_move(pl_brd,&game.player,&game.opponent); // player move
            game.check_result=check_winner(pl_brd);
            check_2(game.check_result,pl_brd,game.exit);
        }
    }
}




