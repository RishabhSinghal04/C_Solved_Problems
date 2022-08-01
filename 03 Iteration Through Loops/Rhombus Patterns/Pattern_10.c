#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = -n; i <= n; i++)
    {
        if (i == 0)
        {
            continue;
        }
        else
        {
            for (int j = -n; j <= n; ++j)
            {
                if (abs(i) + abs(j) == n)
                {
                    if (j == 0)
                    {
                        printf("*");
                    }
                    else if (abs(i + j) == n)
                    {
                        printf("/");
                    }
                    else
                    {
                        printf("\\");
                    }
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    getch();
}