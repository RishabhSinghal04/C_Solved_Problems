
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
            if (j >= -n + abs(i) && j <= n - abs(i))
            {
                printf("%c ", n - abs(i) + 65);
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