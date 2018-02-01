#include "tick_tack_toe.h"




void check_2(int check,char tick[3][3],char again)
{
    if(check==1 || check == 2 || check == 3)
    {
        printf("\nCURRENT RESULT:\n");
        printf("_____(1)(2)(3)\n");
        for(int i = 0;i<3;i++)
        {
            printf("_(%i)_" ,i+1);
            for(int k = 0;k<3;k++)
                {
                    printf("|%c|",tick[i][k]);
                }
                printf("\n");
        }
            printf("\nEND\n");
            if(check == 2)
            {
                printf("\nO have won\n");
                printf("\n If you want to quit press \"q\" or \"Q\" \n");
                scanf("%c",&again);
                if(again != 'q' && again != 'Q')
                {
                    for(int i = 0;i<3;i++)
                    {
                        for(int k = 0;k<3;k++)
                        {
                            tick[i][k] ='_';
                        }

                        }
                    return;
                    }
                else
                {
                    exit(0);
                }
            }

            else if(check == 1)
            {
                printf("\nX have won\n");
                printf("\n If you want to quit press \"q\" or \"Q\" \n");
                scanf("%c",&again);
                if(again != 'q' && again != 'Q')
                {
                    for(int i = 0;i<3;i++)
                    {
                        for(int k = 0;k<3;k++)
                        {
                            tick[i][k] ='_';
                        }
                    }
                    return;
                }
                else
                {
                    exit(0);
                }
            }

            else if(check == 3)
            {
                printf("\nDRAW\n");
                printf("\n If you want to quit press \"q\" or \"Q\" \n");
                scanf("%c",&again);
                if(again != 'q' && again != 'Q')
                {
                    for(int i = 0;i<3;i++)
                    {
                        for(int k = 0;k<3;k++)
                        {
                            tick[i][k] ='_';
                        }
                    }
                    return;

                }
                else
                {
                    exit(0);
                }
            }
    }
}
