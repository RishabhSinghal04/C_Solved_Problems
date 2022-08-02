#include <stdbool.h>

bool isPrimeNumber(long long number)
{
    int factor_count=0;
    for(long long i=1;i<=number;i++)
    {
        if(number%i==0)
            factor_count++;
    }
    if(factor_count==2)
        return true;
    else
        return false;
}