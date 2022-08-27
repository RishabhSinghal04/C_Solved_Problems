/**
The Lucas numbers, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123, 199,.......n, each succeeding term being the sum of the previous two terms as expressed by Ln = L(n-1) + L(n-2).
The initial terms are L1 = 1 and L2 = 3.
1 + 3 = 4 -> 3 + 4 = 7 -> 4 + 7 = 11 and so on.
**/

#include <stdio.h>
#include <conio.h>
#include <limits.h>
#include <stdbool.h>

bool isLucasNumber(unsigned long);

void main()
{
    unsigned long num;

    printf("Enter a number: ");
    scanf("%lu", &num);

    isLucasNumber(num) ? printf("%lu is a Lucas Number", num) : printf("%lu is not a Lucas Number", num);

    getch();
}

bool isLucasNumber(unsigned long num)
{
    unsigned long term1 = 1, term2 = 3;
    unsigned long long sum_terms = 0;

    if (num == 1 || num == 3)
    {
        return true;
    }
    else
    {
        for (int i = 3; i <= INT_MAX; ++i)
        {
            sum_terms = term1 + term2;

            if(sum_terms == num)
            {
                return true;
            }
            else if(sum_terms > num)
            {
                return false;
            }
            else
            {
                term1 = term2;
                term2 = sum_terms;
            }
        }
    }
}