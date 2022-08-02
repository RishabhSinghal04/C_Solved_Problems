
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = -n; i <= n; ++i)
    {
        for (int j = -n; j <= n; ++j)
        {
            if (j < -abs(i) || j > abs(i))
            {
                printf("  ");
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