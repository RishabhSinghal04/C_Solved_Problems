#include <stdbool.h>
#include "Prime_number.c"

long long NumberEqualToSumOfTwoPrimeNumbers(long long number)
{
    for(long long i=2;i<=number/2;i++)
    {
        if(isPrimeNumber(i) && isPrimeNumber(number-i))
        {
            if(i+(number-i)==number)
                printf("\t %5lld \t + %5lld \t = %5lld \n",i,number-i,number);
        }
    }
}