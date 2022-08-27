/**
A sublime number is a number such that both the sum of its divisors and the number of its divisors are perfect numbers.
The smallest sublime number is 12. There are 6 divisors of 12 – 1, 2, 3, 4, 6, and 12 – the sum of which is 28. Both 6 and 28 are perfect.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isSublimeNumber(unsigned long);
bool isPerfectNumber(unsigned long);

void main()
{
    unsigned long num;

    printf("Enter a number: ");
    scanf("%lu", &num);

    isSublimeNumber(num) ? printf("%lu is a Sublime Number", num) : printf("%lu is not a Sublime Number", num);

    getch();
}

bool isSublimeNumber(unsigned long num)
{
    unsigned short count_divisors = 2;
    unsigned long long sum_divisors = num + 1;

    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            if (i == num / i)
            {
                count_divisors++;
                sum_divisors += i;
            }
            else
            {
                count_divisors += 2;
                sum_divisors += (i + num / i);
            }
        }
    }
    return (isPerfectNumber(count_divisors) && isPerfectNumber(sum_divisors)) ? true : false;
}

bool isPerfectNumber(unsigned long num)
{
    unsigned long long sum_divisors = 0;

    for (long i = 1; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            sum_divisors += i;
        }
    }

    return (sum_divisors == num) ? true : false;
}