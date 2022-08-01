
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = -n; i < n; ++i)
    {
        // Space
        for (int j = 1; j < n - i; ++j)
        {
            printf(" "); // single space
        }

        // Upper Triangle
        if (i < 0)
        {
            for (int k = 1; k <= n + i + 1; ++k)
            {
                printf("* ");
            }
        }

        // Lower Triangles
        else
        {
            // Triangle on the left side
            for (int l = 0; l <= i; l++)
            {
                printf("* ");
            }
            // Space between the triangles
            for (int m = i; m < n + n - i - 2; ++m)
            {
                printf(" ");
            }
            // Triangle on the right side
            for (int k = 0; k <= i; ++k)
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    getch();
}