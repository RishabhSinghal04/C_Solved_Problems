// 0, 1, 2, 5, 12, 29, 70, 169, 408, ....

#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, term1 = 0, term2 = 1, term3 = 0;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("0, 1");

    for (int i = 3; i <= n; ++i)
    {
        term3 = 2 * term2 + term1;
        printf(", %u", term3);

        term1 = term2;
        term2 = term3;
    }

    getch();
}