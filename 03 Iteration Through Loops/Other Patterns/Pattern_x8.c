
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = -n + 1; j <= n - 1; ++j)
        {
            if (abs(j) == n - i)
            {
                printf("%c ", 64 + n + j);
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