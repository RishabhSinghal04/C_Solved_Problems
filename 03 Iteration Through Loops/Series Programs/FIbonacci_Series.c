// 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, .....

#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, term1 = 0, term2 = 1, term3 = 0;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("%u, %u", term1, term2);

    for (int i = 3; i <= n; ++i)
    {
        term3 = term1 + term2;
        printf(", %u", term3);

        term1 = term2;
        term2 = term3;
    }

    getch();
}