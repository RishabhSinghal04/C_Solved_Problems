
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n * 3; ++i)
    {
        for (int j = -n; j <= n; ++j)
        {
            if (i <= n && abs(j) == i - 1) // Upper Portion
            {
                printf("* ");
            }
            else if (i > n && i <= n * 2 && abs(j) == n) // Middle Portion
            {
                printf("* ");
            }
            else if (i > n * 2 && i == n * 3 - abs(j)) // Lower Portion
            {
                printf("* ");
            }
            else // Space
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    getch();
}