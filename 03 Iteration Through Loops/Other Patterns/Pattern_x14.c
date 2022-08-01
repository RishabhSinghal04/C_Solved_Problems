
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
        for (int j = 0; j <= n; ++j)
        {
            if (abs(i) == j)
            {
                printf("%c  ", j + 65);
            }
            else
            {
                printf("   "); // Triple space
            }
        }
        printf("\n");
    }

    getch();
}