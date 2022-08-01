
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, term;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        term = n - i + 1;

        for (int j = 1; j <= n; ++j)
        {
            printf("%4u", term);
            term += n;
        }
        printf("\n");
    }

    getch();
}