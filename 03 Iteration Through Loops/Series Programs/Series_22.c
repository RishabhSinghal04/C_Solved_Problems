// 1, 3, 6, 11, 18, 29, 42, ....

#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, j, term = 1, prime_number = 2;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("%u, %u", term, term + prime_number);
    term += prime_number;
    prime_number = 3;

    for (int i = 3; i <= n; ++i) // Terms
    {
        j = 3; // Prime Numbers
        while (j * j <= prime_number)
        {
            if (prime_number % j == 0)
            {
                prime_number += 2; // Odd numbers only
                j = 3;
            }
            else
            {
                j += 2;
            }
        }

        term += prime_number;
        prime_number += 2;

        printf(", %u", term);
    }

    getch();
}