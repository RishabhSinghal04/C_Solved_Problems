/**
A number is a Superabundant Number if sigma(n)/n > sigma(m)/m for all m < n, where sigma is the sum of divisors of n.

N = 4 -> sum of divisors of 4 is 7 and 7/4 is 1.75
3 which is less than 4 has a sum of divisors 1.3333 < 1.75
Similarly for 2 -> sum of divisors is 1.5 < 1.75

Since 1, 2 and 3 are less than 4 and their sum of divisors is also less than 1.75 therefore 4 is a Superabundant Number.
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool isSuperabundantNumber(unsigned long);
unsigned long long SumDivisors(unsigned long);

void main()
{
    unsigned long num;

    printf("Enter a number: ");
    scanf("%lu", &num);

    isSuperabundantNumber(num) ? printf("%lu is a Superabundant Number", num) : printf("%llu is not a Superabundant Number", num);

    getch();
}

bool isSuperabundantNumber(unsigned long num)
{
    float x = SumDivisors(num) / (num * 1.0); // To store result of division : (sum of divisors of num) / num

    for (float i = num - 1; i > 1; --i)
    {
        if (x < SumDivisors(i) / i)
        {
            return false;
        }
    }
    return true;
}

unsigned long long SumDivisors(unsigned long num)
{
    if (num == 1)
    {
        return 1;
    }

    unsigned long long sum_divisors = num + 1;

    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            sum_divisors += (i == num / i) ? i : i + num / i;
        }
    }
    return sum_divisors;
}