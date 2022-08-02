#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = -n; i <= n; i++)
    {
        for (int j = -n; j <= n; ++j)
        {
            if (abs(i) + abs(j) == n)
            {
                printf("%2u", abs(i) + 1);
            }
            else
            {
                printf("  "); // Double space
            }
        }
        printf("\n");
    }

    getch();
}