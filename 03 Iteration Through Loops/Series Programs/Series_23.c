// S = 1 + (1 + 2) + (1 + 2 + 3) + (1 + 2 + 3 + 4) + ...... n.
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, sum=1;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("1");

    for(int i=2; i<=n; ++i)
    {
        printf(" + (1");
        sum += 1;

        for(int j=2; j<=i; ++j)
        {
            printf(" + %u", j);
            sum += j;
        }

        printf(")");
    }

    printf(" = %u", sum);

    getch();
}