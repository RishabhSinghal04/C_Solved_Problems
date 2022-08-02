
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, prime_num = 2, term_count = 0, factor_count = 1;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        while (term_count < n)
        {
            factor_count = 1;

            for (int j = 2; j * j <= prime_num; ++j)
            {
                if (prime_num % j == 0) // Check whether 'prime_num' is a prime number or not
                {
                    factor_count = 0;
                }
            }

            if (factor_count == 1)
            {
                printf("%4u ", prime_num); // Print Prime Number
                term_count++;             // Next term of the pattern
            }
            (prime_num > 2) ? prime_num += 2 : prime_num++; // Odd Numbers
        }
        printf("\n");
        term_count = 0;
    }

    getch();
}