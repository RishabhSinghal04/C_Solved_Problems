
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, term;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        term = i;

        for (int j = 1; j <= n; ++j)
        {
            if (term <= n)
            {
                printf("%c ", term + 64);
                term++;
            }
            else
            {
                term = 1;
                printf("%c ", term + 64);
                term++;
            }
        }
        printf("\n");
    }

    getch();
}