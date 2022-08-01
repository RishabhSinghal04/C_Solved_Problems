// 1, -3, 5, -7, 9 .....

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
        if (i % 2 == 0)
        {
            printf(", -%d", i * 2 - 1);
        }
        else
        {
            printf(", %d", i * 2 - 1);
        }
    }

    getch();
}