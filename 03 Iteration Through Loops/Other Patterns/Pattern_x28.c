
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, term = 0;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        term = i;
        for (int j = 1; j <= n + i; ++j)
        {
            if (j > n - i)
            {
                (j <= n) ? printf("%2u ", term++) : printf("%c  ", j - n + i + 63);
            }
            else
            {
                printf("   "); // Triple Space
            }
        }
        printf("\n");
    }

    getch();
}