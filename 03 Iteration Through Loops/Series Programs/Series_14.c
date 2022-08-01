// S = a - (a^3)/5 + (a^5)/9 - (a^7)/13 + .... 

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int n, a;
    float sum = 0.0f;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("Enter the value of 'a': ");
    scanf("%d", &a);

    printf("%d", a);
    sum = a;

    for (int i = 2; i <= n; ++i)
    {
        if (i % 2 == 0)
        {
            printf(" - (%d^%u)/%u", a, i * 2 - 1, i * 4 -3);
            sum = sum - pow(a, i * 2 - 1) / (i * 4 -3);
        }
        else
        {
            printf(" + (%d^%u)/%u", a, i * 2 - 1, i * 4 -3);
            sum = sum + pow(a, i * 2 - 1) / (i * 4 -3);
        }
    }

    printf(" = %f", sum);

    getch();
}