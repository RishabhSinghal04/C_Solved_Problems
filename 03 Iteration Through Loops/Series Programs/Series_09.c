// 1, 12, 123, 1234, ....

#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, term = 1;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("%u", term);

    for (int i = 2; i <= n; ++i)
    {
        term = term * 10 + i;
        printf(", %u", term);
    }

    getch();
}