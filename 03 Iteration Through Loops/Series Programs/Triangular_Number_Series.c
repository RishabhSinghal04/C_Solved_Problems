// 1, 3, 6, 10, 15, 21, 28, ....

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
        //term += i;
        printf(", %u", term += i);   // OR printf(", %u", (i * (i + 1))/2);
    }

    getch();
}