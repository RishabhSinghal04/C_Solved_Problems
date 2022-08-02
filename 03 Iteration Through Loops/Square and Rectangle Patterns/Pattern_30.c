
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, term = 1;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if ((i + j) % 2 == 0)
            {
                printf("* ");
            }
            else
            {
                printf("%c ", term + 64);
                term++;
            }
        }
        printf("\n");
    }

    getch();
}