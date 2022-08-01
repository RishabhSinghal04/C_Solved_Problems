
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n * 2; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            (i <= n) ? printf(" %4u %4u", j, i) : printf(" %4u %4u", i - n, j);
        }
        printf("\n");
    }

    getch();
}