/*
A program to find the largest consecutive sequence of integers with no prime number.
N = 30
Largest consecutive sequence of integers with no prime numbers: 24 to 28
Total composite numbers in the sequence are 5.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void SieveOfEratosthenes(unsigned short *, unsigned short);
void PrimeGap(unsigned short *, unsigned short);

void main()
{
    unsigned short n, prime_count = 0;

    printf("Enter limit: ");
    scanf("%hu", &n);

    unsigned short *array_num = (unsigned short *)calloc(n, sizeof(unsigned short));

    SieveOfEratosthenes(array_num, n);
    PrimeGap(array_num, n);

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

void PrimeGap(unsigned short array[], unsigned short n)
{
    unsigned short temp = 0, gap = 0, left_index = 0, right_index = 0;

    for (int i = 0; i < n; ++i)
    {
        temp = (array[i] == 1) ? ++temp : 0;

        if (temp > gap)
        {
            gap = temp;
            right_index = i;
        }
    }
    left_index = right_index - gap + 1;

    printf("\nLargest consecutive sequence of integers with no prime numbers: %hu to %hu", left_index, right_index);
    printf("\nTotal composite numbers in the sequence are %hu", gap);
}