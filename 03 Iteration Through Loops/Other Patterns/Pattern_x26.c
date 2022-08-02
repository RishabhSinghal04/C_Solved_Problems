
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
        for (int j = 1; j <= abs(i) * 2 + 2; ++j)
        {
            (j <= abs(i) + 1) ? printf("%2u ", j) : printf("%2u ", abs(i) * 2 - j + 3);
        }
        printf("\n");
    }

    getch();
}