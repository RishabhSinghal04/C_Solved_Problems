// 1.5, 3.0, 4.5, 6.0, 7.5, ....

#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("1.5");

    for (int i = 2; i <= n; ++i)
    {
        printf(", %.1f", 1.5 * i);
    }

    getch();
}