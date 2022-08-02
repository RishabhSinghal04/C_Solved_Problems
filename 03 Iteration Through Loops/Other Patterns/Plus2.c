
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
        for (int j = -n; j <= n; ++j)
        {
            if (i == 0) // Print column elements
            {
                printf("%2u ", n + 1 - abs(j));
            }
            else if (j == 0) // Print row elements
            {
                printf("%2u ", n + 1 - abs(i));
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