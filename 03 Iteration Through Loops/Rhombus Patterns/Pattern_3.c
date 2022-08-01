
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = -n; i <= n; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {
            if (j >= abs(i))
            {
                printf("* ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    getch();
}