
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n - i + 1; ++j)
        {
            if (i % 2 == 0)
            {
                printf("%2u ", n + 2 - i - j);
            }
            else
            {
                printf("%2u ", j);
            }
        }
        printf("\n");
    }

    getch();
}