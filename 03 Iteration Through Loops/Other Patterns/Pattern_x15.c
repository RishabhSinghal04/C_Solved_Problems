
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = -n; i <= n; ++i)
    {
        for (int j = 1; j <= 2 * (n - abs(i)) + 1; ++j)
        {
            printf("%2u ", 2 * (n - abs(i)) + 1);
        }
        printf("\n");
    }

    getch();
}