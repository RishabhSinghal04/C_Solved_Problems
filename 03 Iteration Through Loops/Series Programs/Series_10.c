// 9 + 99 + 8 + 89 + ....

#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n;
    int sum = 108, term = 9;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("%d + %d", term, term * 10 + 9);
    term--;

    for (int i = 2; i <= n; ++i)
    {
        printf(" + %d", term);
        sum += term;

        printf(" + %d", term * 10 + 9);
        sum = sum + term * 10 + 9;

        term--;
    }

    printf(" = %d", sum);

    getch();
}