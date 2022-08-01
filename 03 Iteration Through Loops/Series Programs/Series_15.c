// 1, 2, 4, 7, 11, .....

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
        printf(", %u", term += (i - 1));
    }

    getch();
}