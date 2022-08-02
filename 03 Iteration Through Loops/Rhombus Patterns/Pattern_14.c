#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n;

    printf("Enter row limit: ");
    scanf("%d", &n);

    for (int i = -n; i <= n; i++)
    {
        for (int j = -n; j <= n; j++)
        {
            if (j >= -(n - abs(i)) && j <= (n - abs(i)))
            {
                printf("%c ", 65 + n - j - abs(i));
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    getch();
}