
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
            if (i % 2 == 0)
            {
                printf("%2d ", n - j + 1);
            }
            else
            {
                printf("%2d ", j);
            }
        }
        printf("\n");
    }

    getch();
}