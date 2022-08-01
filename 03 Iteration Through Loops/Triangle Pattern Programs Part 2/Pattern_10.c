
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    unsigned int n, count = -1;
    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        count = -1;
        for (int j = 1; j < n + i; ++j)
        {
            if (j > n - i)
            {
                (j <= n) ? count++ : count--;
                printf(" %4u", (int)(pow(2.0, count) + 1e-9));
            }
            else
            {
                printf("     ");
            }
        }
        printf("\n");
    }

    getch();
}