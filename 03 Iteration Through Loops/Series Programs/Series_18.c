// 2, 5, 10, 17, ....

#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n;

    printf("Enter series limit: ");
    scanf("%u", &n);

    printf("2");

    for (int i = 2; i <= n; ++i)
    {
        printf(", %u", i * i + 1);
    }

    getch();
}