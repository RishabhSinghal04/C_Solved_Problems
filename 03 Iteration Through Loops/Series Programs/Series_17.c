// 24, 99, 224, 399, ....

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    unsigned int n;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("24");

    for (int i = 2; i <= n; ++i)
    {
        printf(", %u", (int)(pow(i * 5, 2) + 1e-9) - 1);
    }

    getch();
}