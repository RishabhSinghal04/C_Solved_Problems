
#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            if (i >= j)
                printf("%c ", (i - j) + 65);
            else
                printf(" ");
        }
        printf("\n");
    }

    getch();
}