// A program to check whether a given number is prime or not

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

/**
 * @brief  A function to check whether a number is prime or not
 * @param  long:
 * @param  int: 3
 * @retval bool
 */
bool isPrimeNumber(unsigned long long, unsigned int);

void main()
{
    unsigned long long num;

    printf("Enter a number: ");
    scanf("%llu", &num);

    isPrimeNumber(num, 3) ? printf("%llu is a Prime Number", num) : printf("%llu is not a Prime Number", num);

    getch();
}

bool isPrimeNumber(unsigned long long num, unsigned int i)
{
    if (num <= 2)
    {
        return (num == 2) ? true : false;
    }
    else if (num % 2 == 0)
    {
        return false;
    }
    else if (num % i == 0)
    {
        return false;
    }
    else if (i * i > num)
    {
        return true;
    }

    isPrimeNumber(num, i + 2);
}