
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n;

    printf("Enter number of rows: ");
    scanf("%u", &n);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n * 2 - (i - 1) * 2; ++j) // n * 2 - (i - 1) * 2 : If rows are 5 then columns = 10, 8, 6, 4, 2
        {
            if (j <= n + 1 - i)
            {
                printf("%c ", j + 64);
            }
            else
            {
                printf("%c ", n * 2 - (i - 1) * 2 - j + 65); // From numbers(say 10, 8, 6, 4, 2) subtract the value of 'j', add 65 and convert in 'char' to get the required pattern
            }
        }
        printf("\n");
    }

    getch();
}