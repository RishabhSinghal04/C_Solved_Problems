// 0, 1, 2, 3, 6, 11, 20, 37, 68, 125, .....
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, term1 = 0, term2 = 1, term3 = 2, term4 = 0;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("%u, %u, %u", term1, term2, term3);

    for (int i = 4; i <= n; ++i)
    {
        term4 = term1 + term2 + term3;
        printf(", %u", term4);

        term1 = term2;
        term2 = term3;
        term3 = term4;
    }

    getch();
}