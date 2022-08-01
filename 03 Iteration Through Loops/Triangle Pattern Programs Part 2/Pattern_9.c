
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n, a;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        a = i - 1;
        for (int j = 1; j < n + i; j++)
        {
            if (j > n - i)
            {
                printf("%d", i - abs(a));
                a--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    getch();
}