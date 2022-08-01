
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    unsigned int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            printf("%2u ", abs(i - j));
        }
        printf("\n");
    }

    getch();
}