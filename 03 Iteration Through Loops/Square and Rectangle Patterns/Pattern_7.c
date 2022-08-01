
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, odd_term = 0, even_term = 0; // Terms in columns

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        odd_term = n - i + 1;
        even_term = n + i;

        for (int j = 1; j <= n; ++j)
        {
            if (j % 2 == 0)
            {
                printf("%4u", even_term);
                even_term += (n * 2);
            }
            else
            {
                printf("%4u", odd_term);
                odd_term += (n * 2);
            }
        }
        printf("\n");
    }

    getch();
}