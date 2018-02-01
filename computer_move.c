#include "tick_tack_toe.h"




void computer_move(char tick[3][3],int *first,char opponent,char computer) //function for computer move
{
    int i,k = 0; // for array checking
    int check_sum = 0;
    static int one_loop=2;
    srand( time( NULL ));
    int row=rand()/100000;
    int array=rand()/200000;

    if(*first==2)   //when computer starts, it chooses where to place his move
    {
        if(one_loop==2)
        {
            row= sum_of_digits(row);
            array= sum_of_digits(array);
           // printf( "liczba cyfr  %d\n", array);
           // printf( "liczba cyfr  %d\n", row);

            if(!(array=array % 2))
            {
                array = 0;
            }
            else if(!(array=array % 3))
            {
                array = 1;
            }
            else
            array = 2;

            if(!(row=row % 2))
            {
                row = 0;
            }
            else if(!(row=row % 3))
            {
                row = 1;
            }
            else
            row = 2;
            one_loop++;

            switch(opponent)
            {
                case 'X':
                tick[row][array] = 'O';
                break;
                case 'O':
                tick[row][array] = 'X';
                break;
                default:
                break;
            }
            return;
        }
    }

    //LOOKING for computer two place
    for(i = 0;i<3;i++)//vertical
    {
        for(k = 0;k<3;k++)
        {
            switch(computer)
            {
                case 'X': //looking X
                {
                    if(tick[k][i]==88)
                    check_sum++;
                    if(check_sum==2)
                    {
                        for(k = 0;k<3;k++)
                        {
                            if(tick[k][i]==95)
                            {
                              tick[k][i]=88;
                              return;
                            }
                        }
                    }
                    break;
                }
                case 'O':
                {
                    if(tick[k][i]==79)
                    check_sum++;
                    if(check_sum==2)
                    {
                        for(k = 0;k<3;k++)
                        {
                            if(tick[k][i]==95)
                            {
                              tick[k][i]=79;
                              return;
                            }
                        }
                    }
                    break;
                }
            }
        }
        check_sum=0;
    }

    for(i = 0;i<3;i++) // looking horizontal
    {
        for(k = 0;k<3;k++)
        {
            switch(computer)
            {
                case 'X': //looking X
                {
                    if(tick[i][k]==88)
                    check_sum++;
                    if(check_sum==2)
                    {
                        for(k = 0;k<3;k++)
                        {
                            if(tick[i][k]==95)
                            {
                              tick[i][k]=88;
                              return;
                            }
                        }
                    }
                    break;
                }
                case 'O':
                {
                    if(tick[i][k]==79)
                    check_sum++;
                    if(check_sum==2)
                    {
                        for(k = 0;k<3;k++)
                        {
                            if(tick[i][k]==95)
                            {
                              tick[i][k]=79;
                              return;
                            }
                        }
                    }
                    break;
                }
            }
        }
        check_sum=0;
    }

    for(k=0,i=0;k<3 && i<3;k++,i++) //looking  bias from left to right
    {

        switch(computer)
        {
            case 'X': //looking X
            {
                if(tick[i][k]==88)
                check_sum++;
                if(check_sum==2)
                    {
                        for(k=0,i=0;k<3 && i<3;k++,i++)
                        {
                            if(tick[i][k]==95)
                            {
                              tick[i][k]=88;
                              return;
                            }
                        }
                    }
                    break;
            }
            case 'O':
            {
                    if(tick[i][k]==79)
                    check_sum++;
                    if(check_sum==2)
                    {
                        for(k=0,i=0;k<3 && i<3;k++,i++)
                        {
                            if(tick[i][k]==95)
                            {
                              tick[i][k]=79;
                              return;
                            }
                        }
                    }
                break;
            }
        }
    }
    check_sum=0;

    for(i=0,k=2;i<3;i++,k--)// looking bias from right to left
    {
        switch(computer)
        {
            case 'X': //looking X
            {
                if(tick[i][k]==88)
                check_sum++;
                if(check_sum==2)
                    {
                        for(k=0,i=0;k<3 && i<3;k++,i++)
                        {
                            if(tick[i][k]==95)
                            {
                              tick[i][k]=88;
                              return;
                            }
                        }
                    }
                    break;
            }
            case 'O':
            {
                    if(tick[i][k]==79)
                    check_sum++;
                    if(check_sum==2)
                    {
                        for(i=0,k=2;i<3;i++,k--)
                        {
                            if(tick[i][k]==95)
                            {
                              tick[i][k]=79;
                              return;
                            }
                        }
                    }
                break;
            }
        }
    }
    check_sum=0;


    //CHEK WHEATHER OPPONENT HAS TWO PLACE
    for(i = 0;i<3;i++)//vertical
    {
        for(k = 0;k<3;k++)
        {
            switch(opponent)
            {
                case 'X': //checking X
                {
                    if(tick[k][i]==88)
                    check_sum++;
                    if(check_sum==2)
                    {
                        for(k = 0;k<3;k++)
                        {
                            if(tick[k][i]==95)
                            {
                              tick[k][i]=79;
                              return;
                            }
                        }
                    }
                    break;
                }
                case 'O':
                {
                    if(tick[k][i]==79)
                    check_sum++;
                    if(check_sum==2)
                    {
                        for(k = 0;k<3;k++)
                        {
                            if(tick[k][i]==95)
                            {
                              tick[k][i]=88;
                              return;
                            }
                        }
                    }
                    break;
                }
            }
        }
        check_sum=0;
    }

    for(i = 0;i<3;i++) // checking horizontal
    {
        for(k = 0;k<3;k++)
        {
            switch(opponent)
            {
                case 'X': //checking X
                {
                    if(tick[i][k]==88)
                    check_sum++;
                    if(check_sum==2)
                    {
                        for(k = 0;k<3;k++)
                        {
                            if(tick[i][k]==95)
                            {
                              tick[i][k]=79;
                              return;
                            }
                        }
                    }
                    break;
                }
                case 'O':
                {
                    if(tick[i][k]==79)
                    check_sum++;
                    if(check_sum==2)
                    {
                        for(k = 0;k<3;k++)
                        {
                            if(tick[i][k]==95)
                            {
                              tick[i][k]=88;
                              return;
                            }
                        }
                    }
                    break;
                }
            }
        }
        check_sum=0;
    }

    for(k=0,i=0;k<3 && i<3;k++,i++) //checking bias from left to right
    {

        switch(opponent)
        {
            case 'X': //checking X
            {
                if(tick[i][k]==88)
                check_sum++;
                if(check_sum==2)
                    {
                        for(k=0,i=0;k<3 && i<3;k++,i++)
                        {
                            if(tick[i][k]==95)
                            {
                              tick[i][k]=79;
                              return;
                            }
                        }
                    }
                    break;
            }
            case 'O':
            {
                    if(tick[i][k]==79)
                    check_sum++;
                    if(check_sum==2)
                    {
                        for(k=0,i=0;k<3 && i<3;k++,i++)
                        {
                            if(tick[i][k]==95)
                            {
                              tick[i][k]=88;
                              return;
                            }
                        }
                    }
                break;
            }
        }
    }
    check_sum=0;

    for(i=0,k=2;i<3;i++,k--)// checking bias from right to left
    {
        switch(opponent)
        {
            case 'X': //checking X
            {
                if(tick[i][k]==88)
                check_sum++;
                if(check_sum==2)
                    {
                        for(k=0,i=0;k<3 && i<3;k++,i++)
                        {
                            if(tick[i][k]==95)
                            {
                              tick[i][k]=79;
                              return;
                            }
                        }
                    }
                    break;
            }
            case 'O':
            {
                    if(tick[i][k]==79)
                    check_sum++;
                    if(check_sum==2)
                    {
                        for(i=0,k=2;i<3;i++,k--)
                        {
                            if(tick[i][k]==95)
                            {
                              tick[i][k]=88;
                              return;
                            }
                        }
                    }
                break;
            }
        }
    }
    check_sum=0;

    //random move
    while(1)
    {


            row= sum_of_digits(row);
            array= sum_of_digits(array);
           // printf( "liczba cyfr  %d\n", array);
           // printf( "liczba cyfr  %d\n", row);

            if(!(array=array % 2))
            {
                array = 0;
            }
            else if(!(array=array % 3))
            {
                array = 1;
            }
            else
            array = 2;

            if(!(row=row % 2))
            {
                row = 0;
            }
            else if(!(row=row % 3))
            {
                row = 1;
            }
            else
            row = 2;
            switch(computer)
            {
                case 'X':
                {
                    if(tick[row][array]==95)
                    {
                        tick[row][array] = 'X';
                        return;
                    }
                    break;
                }

                case 'O':
                {
                    if(tick[row][array]==95)
                    {
                        tick[row][array] = 'O';
                        return;
                    }
                    break;
                }

            }

        if(!(row=row%2))
        {
            for( i = 0;i<3;i++)
            {
                for( k = 0;k<3;k++)
                {
                    if(tick[i][k]==95)
                    {
                        switch(computer)
                        {
                            case 'X':
                            {
                            tick[i][k] = 'X';
                            return;
                            }
                            break;


                            case 'O':
                            {
                                tick[i][k] = 'O';
                                return;
                            }
                            break;
                        }
                    }
                }
            }
        }

        else if((row=row%2))
        {
            for( i = 0;i<3;i++)
            {
                for( k = 0;k<3;k++)
                {
                    if(tick[k][i]==95)
                    {
                        switch(computer)
                        {
                            case 'X':
                            {
                            tick[row][array] = 'X';
                            return;
                            }
                            break;


                            case 'O':
                            {
                                tick[row][array] = 'O';
                                return;
                            }
                            break;
                        }
                    }
                }
            }
        }
    }
}
