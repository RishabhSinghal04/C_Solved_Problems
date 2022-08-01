// a - (a^1)/2! + (a^2)/3! - (a^3)/4! + .... 20.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int a;
    unsigned int n;
    unsigned long long factorial = 1;
    float sum = 0.0f;

    printf("Enter series limit (n <= 20): ");
    scanf("%u", &n);

    printf("Enter the value of 'a': ");
    scanf("%d", &a);

    printf("%d", a);
    sum = a;

    if (n <= 20)
    {
        for (int i = 2; i <= n; ++i)
        {
            factorial = 1;

            for (int j = 2; j <= i; ++j)
            {
                factorial *= j;
            }

            if (i % 2 == 0)
            {
                sum = sum - (pow(a, i - 1) + 1e-9) / factorial;
                printf(" - (%d^%u)/%u!", a, i - 1, i);
            }
            else
            {
                sum = sum + (pow(a, i - 1) + 1e-9) / factorial;
                printf(" + (%d^%u)/%u!", a, i - 1, i);
            }
        }

        printf(" = %f", sum);
    }
    else
    {
        printf("n>=20");
    }

    getch();
}