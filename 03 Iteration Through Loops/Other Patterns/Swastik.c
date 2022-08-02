
#include <stdio.h>
#include <conio.h>

void main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = -n; i <= n; ++i)
    {
        for (int j = -n; j <= n; ++j)
        {
            if (i == 0 || j == 0)
            {
                printf("* ");
            }
            else if (i == -n && j > 0 || j == -n && i < 0 || j == n && i > 0 || i == n && j < 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    getch();
}