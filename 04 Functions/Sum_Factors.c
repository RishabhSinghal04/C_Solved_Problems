
#include <stdio.h>
#include <conio.h>

unsigned long long Factors(unsigned long);

void main()
{
    unsigned long num;

    printf("Enter a number: ");
    scanf("%lu", &num);

    printf("Sum of factors of %lu is %llu", num, Factors(num));

    getch();
}

unsigned long long Factors(unsigned long num)
{
    unsigned long long sum_factors = num + 1;
    unsigned short count_factors = 0;

    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            sum_factors += ((i == num / i) ? i : (i + num / i));
            /* Consider a number 100 -> (2 + 50) + (4 + 25) + (5 + 20) + (10)
            Since 2 == 100/2 which is false i.e. sum_factors += 2 + 50
            Since 10 == 100/10 is true i.e. sum_factors += i */
        }
    }
    return sum_factors;
}