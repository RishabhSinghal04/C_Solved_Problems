
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
        for (int j = -n; j <= n; ++j)
        {
            if (i == n || j == -n || i == j)
            {
                printf("* ");
            }
            else if (i == -j && i < 0)
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