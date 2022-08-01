
#include <stdio.h>
#include <conio.h>

void main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = -n; j <= n; ++j)
        {
            if (j >= -i && j <= i)
            {
                (j == 0) ? printf("*") : (j < 0) ? printf("( ")
                                                 : printf(" )");
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