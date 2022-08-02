
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef unsigned long long int ull;

void primeNumber(ull);
void primeFactor(ull);

void main()
{
    ull num;
    printf("Enter a number: ");
    scanf("%llu", &num);

    primeNumber(num);
    primeFactor(num);

    getch();
}

void primeNumber(ull num)
{
    ull *prime_num = calloc(num + 1, sizeof(ull));

    // Process to mark composite numbers
    for (ull i = 2; i <= num; i++)
    {
        if (prime_num[i] == 0)
        {
            for (ull j = i * i; j <= num; j += i)
                prime_num[j] = 1;
        }
    }
    // Process to print prime numbers
    printf("\nFollowing are the prime numbers less than or equal to(if prime) %llu :-\n", num);

    for (ull i = 2; i <= num; i++)
    {
        if (prime_num[i] == 0)
            printf("%llu\n", i);
    }

    free(prime_num);
}

void primeFactor(ull num)
{
    ull *prime_factor = calloc(num, sizeof(ull));

    for (int i = 2; i <= num; i++)
    {
        prime_factor[i] = i;
    }

    for (ull i = 2; i <= num; i++)
    {
        if (prime_factor[i] == i)
        {
            for (ull j = i * i; j <= num; j += i)
            {
                if (prime_factor[j] == j)
                {
                    prime_factor[j] = i;
                }
            }
        }
    }

    printf("\nThe prime factor(s) of %llu is/are ", num);
    while (num > 1)
    {
        printf("%llu ", prime_factor[num]);
        num /= prime_factor[num];
    }
    free(prime_factor);
}