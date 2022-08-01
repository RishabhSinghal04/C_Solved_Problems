
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, a = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + i - 1; j++)
        {
            if (j >= n - i + 1)
                printf("%d", (n + a + 1) - (i + j));
            else
                printf(" ");
        }
        a += 2;
        printf("\n");
    }

    getch();
}