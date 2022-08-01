
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    unsigned int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n * 2 - 1; ++j)
        {
            if (j <= n - i)
            {
                printf(" * ");
            }
            else if (j >= n + i)
            {
                printf(" * ");
            }
            else
            {
                printf("%2u ", (i * 2 - 1) - abs(n - j));
            }
        }
        printf("\n");
    }

    getch();
}