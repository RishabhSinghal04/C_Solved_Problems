
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n + 1 - i; ++j)
        {
            if (j == 1)
            {
                printf("%2u ", i);
            }
            else if (i == 1)
            {
                printf("%2u ", n * 3 - j - 1);
            }
            else if (j == n + 1 - i)
            {
                printf("%2u ", n + j - 1);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    getch();
}