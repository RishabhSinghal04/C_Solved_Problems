
#include <stdio.h>
#include <conio.h>

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
                printf("%2u ", j);
            }
            else if (j >= n + i)
            {
                printf("%2u ", (n * 2) - j);
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }

    getch();
}