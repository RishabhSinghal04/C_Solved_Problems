
#include <stdio.h>
#include <conio.h>

void main()
{
    int n;

    printf("ENter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i < n * 2; ++i)
    {
        for (int j = -n * 2 + 2; j <= n * 2 - 2; ++j)
        {
            if (i <= n)
            {
                if (j >= i && j < n * 2 - i - 1)
                {
                    printf("  ");
                }
                else if (j > -n * 2 + i + 1 && j <= -i)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    getch();
}