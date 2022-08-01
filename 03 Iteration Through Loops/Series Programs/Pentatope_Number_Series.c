// 1, 5, 15, 35, 70, 126, ....
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("1");

    for (int i = 2; i <= n; ++i)
    {
        printf(", %u", (i * (i + 1) * (i + 2) * (i + 3)) / 24);
    }

    getch();
}