#ifndef _TICK_TACK_
#define _TICK_TACK_

#include <stdio.h>
#include <time.h>
#include <stdlib.h> // for sround i round

//DEC
int check_winner(char tick[3][3]);
void computer_move(char tick[3][3],int *first,char opponent,char computer);
void player_move(char pl_brd[3][3],char *player,char *opponent);
int start(void);
int sum_of_digits(int number);
void check_2(int check,char tick[3][3],char again);

extern int mateusz;

#endif

