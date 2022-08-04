/*
1
9 2
10 8 3
14 11 7 4
15 13 12 6 5
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, x = 1, y, term1, term2, d1, d2;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    y = n;

    for (int i = 1; i <= n; ++i)
    {
        term1 = x;
        term2 = y;
        d1 = n + 1 - i;
        d2 = n + 2 - i;

        for (int j = 1; j <= i; ++j)
        {
            ((i + j) % 2 == 0) ? printf("%d \t", term1) : printf("%d \t", term2);

            term1 -= d1++; // Decrement term1
            term2 -= d2++; // Decrement term2
        }
        y += n - i;     // To find 1st term of every even row
        x += n + 1 - i; // To find 1st term of every odd row

        printf("\n");
    }

    getch();
}