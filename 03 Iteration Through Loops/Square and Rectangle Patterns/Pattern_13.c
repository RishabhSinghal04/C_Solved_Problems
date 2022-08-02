
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n;
    char ch = '\0';

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        ch = i + 64;
        for (int j = 1; j <= n; ++j)
        {
            printf("%c ", ch); // OR printf("%c ", i + (n * (j - 1)) + 64);
            ch += n;
        }
        printf("\n");
    }

    getch();
}