
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i == 1)
            {
                printf("%2u ", n);
            }
            else if (j == n)
            {
                printf("%2u ", n + 1 - i);
            }
            else if (j == i)
            {
                printf("%2u ", n + 1 - i);
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