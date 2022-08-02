// 1, 3, 6, 11, 20, ....

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    unsigned int n;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("1");

    for (int i = 2; i <= n; ++i)
    {
        printf(", %u", (int)(pow(2, i - 1) + 1e-9) + i - 1);
    }

    getch();
}