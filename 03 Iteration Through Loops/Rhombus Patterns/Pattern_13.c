
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n, temp;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = -n; i <= n; ++i)
    {
        temp = (i < 1) ? 0 : i;
        for (int j = 0; j <= n; ++j)
        {
            if (j >= abs(i))
            {
                printf("%c ", 65 + temp);
                temp++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    getch();
}