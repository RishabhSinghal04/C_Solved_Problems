
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, count = 0;
    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j < n + i; ++j)
        {
            if(j > n - i)
            {
                (j <= n) ? count++ : count--;
                printf("%2u ", count);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    getch();
}