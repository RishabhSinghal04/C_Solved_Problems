/*
A program to express an even number as the sum of two prime numbers.
30 : 23 + 7, 19 + 11, 17 + 13
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void SieveOfEratosthenes(unsigned short *, unsigned short);
void GoldbachConjecture(unsigned short *, unsigned short, unsigned short);

unsigned short copyPrimeNumbers(unsigned short *, unsigned short *, unsigned short);

void main()
{
    unsigned short num, prime_count = 0;

    printf("Enter a number: ");
    scanf("%hu", &num);

    unsigned short *array_num = (unsigned short *)calloc(num, sizeof(unsigned short)), *array_prime = (unsigned short *)calloc(prime_count, sizeof(unsigned short));

    SieveOfEratosthenes(array_num, num);
    prime_count = copyPrimeNumbers(array_num, array_prime, num);

    GoldbachConjecture(array_prime, prime_count, num);

    getch();
}

void SieveOfEratosthenes(unsigned short array[], unsigned short n)
{
    array[0] = array[1] = 1;

    for (int i = 2; i * i <= n; ++i)
    {
        if (array[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                array[j] = 1;
            }
        }
    }
}

unsigned short copyPrimeNumbers(unsigned short array[], unsigned short array_prime[], unsigned short n)
{
    unsigned short count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (array[i] == 0)
        {
            array_prime[count++] = i;
        }
    }
    return count--;
}

void GoldbachConjecture(unsigned short array[], unsigned short n, unsigned short num)
{
    if (num % 2 == 1)
    {
        printf("\nNot an even number");
        return;
    }
    else if (num <= 2)
    {
        printf("\nNumber should be greater than 2");
        return;
    }

    unsigned short start = 0, end = n - 1;

    while (start <= end)
    {
        if (array[start] + array[end] == num)
        {
            printf("\n%hu + %hu = %hu", array[start], array[end], num);
            start++;
            end--;
        }
        else if (array[start] + array[end] < num)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
}