
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + i - 1; j++)
        {
            if (j >= n - i + 1)
                printf("%d", abs(n - j));
            else
                printf(" ");
        }
        printf("\n");
    }

    getch();
}