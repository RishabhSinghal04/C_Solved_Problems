
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
            if (j > n - i)
            {
                printf("%2u ", n + 1 - i);
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