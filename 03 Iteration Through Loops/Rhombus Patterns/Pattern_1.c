#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n, pattern_var;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = -n; i <= n; ++i)
    {
        pattern_var = 1;
        for (int j = -n; j <= n; ++j)
        {
            if (j >= -(n - abs(i)) && j <= (n - abs(i)))
            {
                if (j < 0)
                {
                    printf("%d ", pattern_var);
                    pattern_var++;
                }
                else
                {
                    printf("%d ", pattern_var--);
                }
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