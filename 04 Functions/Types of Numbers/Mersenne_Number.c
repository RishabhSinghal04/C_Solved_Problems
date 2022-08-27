/**
Mersenne numbers are numbers of the form Mn = (2^n - 1) where 'n' is a natural number.
When n is a prime number, p, (2^p - 1) often produces a prime number referred to as a Mersenne Prime.
n = 2, 3, 5, 7, 13, 17, 19, 31, ....
**/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

bool isMersenneNUmber(unsigned long long);

void main()
{
    unsigned long long num;

    printf("Enter s number: ");
    scanf("%llu", &num);

    isMersenneNUmber(num) ? printf("%llu is a Mersenne Number", num) : printf("%llu is not a Mersenne Number", num);

    getch();
}

bool isMersenneNUmber(unsigned long long num)
{
    for (int i = 1;; ++i)
    {
        if (num == (unsigned long long)(pow(2, i) + 1e-9) - 1)
        {
            return true;
        }
        else if((unsigned long long)(pow(2, i) + 1e-9) + 1 > num)
        {
            return false;
        }
    }
}