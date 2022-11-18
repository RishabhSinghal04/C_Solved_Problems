/*
A program to mark the multiples of prime numbers (Sieve of Eratosthenes)
2 : 4, 6, 8, 10, .....
3 : 6, 9, 12, 15, 18, 21, ......
and so on.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void displayArrayElements(unsigned short *, unsigned short);
void displayPrimeNumbers(unsigned short *, unsigned short);

/**
 * @brief  Function to mark the multiples of prime numbers (Sieve of Eratosthenes)
 * @param  *: array
 * @param  short: size of array
 * @retval return total number of prime numbers
 */
void SieveOfEratosthenes(unsigned short *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    unsigned short *array_num = (unsigned short *)calloc(n, sizeof(unsigned short));

    SieveOfEratosthenes(array_num, n);

    printf("\nPrime numbers in the array are:-\n");
    displayPrimeNumbers(array_num, n);

    getch();
}

void displayArrayElements(unsigned short array[], unsigned short n)
{
    printf("%hd", array[0]);

    for (int i = 1; i < n; ++i)
    {
        printf(", %hd", array[i]);
    }
}

void displayPrimeNumbers(unsigned short array[], unsigned short n)
{
    printf("%hu", 2);

    for (int i = 3; i < n; ++i)
    {
        if (array[i] == 0)
        {
            printf(", %hu", i);
        }
    }
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