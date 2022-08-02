
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, a;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    a = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + i - 1; j++)
        {
            if (j >= n - i + 1)
                printf("%d", (n + a + 1) - (i + j));
            else
                printf(" ");
        }
        a++;
        printf("\n");
    }

    getch();
}