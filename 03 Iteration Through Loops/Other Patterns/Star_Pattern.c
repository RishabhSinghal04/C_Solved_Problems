
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = -n; i <= n; ++i)
    {
        for (int j = -n * 2 + 2; j <= n * 2 - 2; ++j)
        {
            if (abs(i + j) == n || abs(j - i) == n)
            {
                printf("* ");
            }
            else if (abs(i) == n - 2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    getch();
}