
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, term = 1;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = -n; i <= n; ++i)
    {
        for (int j = 1; j <= term; ++j)
        {
            printf("%2u ", term);
        }
        printf("\n");
        (i >= 0) ? term -= 2 : (term += 2);
    }

    getch();
}