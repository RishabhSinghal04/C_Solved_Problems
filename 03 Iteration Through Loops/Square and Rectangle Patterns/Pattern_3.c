
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, term = 0;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        term = i;
        for (int j = 1; j <= n; ++j)
        {
            printf("%4u", term);
            term += n;
        }
        printf("\n");
    }

    getch();
}