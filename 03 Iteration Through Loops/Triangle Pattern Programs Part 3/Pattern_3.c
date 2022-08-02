
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n * 2 - i; ++j)
        {
            if (j >= i)
            {
                printf("%2u ", j - i + 1);
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