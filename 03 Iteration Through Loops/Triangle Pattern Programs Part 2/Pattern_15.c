
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, sum = 1;
    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j < n + i; ++j)
        {
            if (j > n - i) // To print the traingle
            {
                if (j != n) // Left and right terms
                {
                    sum += 2;
                    printf("%5u ", sum);
                }
                else // Print terms in middle
                {
                    (i != 1) ? printf("%5u ", (sum + 1) * ((i - 1) * 2)) : printf("    1"); // 4 Spaces
                }
            }
            else
            {
                printf("      "); // 6 Spaces
            }
        }
        printf("\n");
    }

    getch();
}