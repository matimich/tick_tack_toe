#include "tick_tack_toe.h"

int sum_of_digits(int number)
{
    int digit = 0;
    int number_2 =number;
    int number_3 =number;
    int sum = 0;
    while(number!=0)
    {
        number/=10;
        digit++;
    }
    while(digit!=0)
    {
        number_2 %=10;
        sum+=number_2;
        number_3/=10;
        number_2 = number_3;
        digit--;
    }
    return sum;
}

