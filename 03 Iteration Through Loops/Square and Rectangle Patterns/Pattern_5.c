
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, odd_term = 0, even_term = 0; // Terms in columns

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        odd_term = i;              // Initialsie first term of 1st column and 'i'th row
        even_term = n * 2 - i + 1; // Initialise first term of 2nd column and 'i'th row

        for (int j = 1; j <= n; ++j)
        {
            if (j % 2 == 0)
            {
                printf("%4u ", even_term);
                even_term += (n * 2); // Increment the terms at even columns by 'n x 2 + previous term'
            }
            else
            {
                printf("%4u ", odd_term);
                odd_term += (n * 2); // Increment the terms at odd columns by 'n x 2 + previous term'
            }
        }
        printf("\n");
    }

    getch();
}