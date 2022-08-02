
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int n, num_triangle, count = 1;

    printf("Enter number of right angle triangles: ");
    scanf("%u", &num_triangle);

    printf("Enter number of rows: ");
    scanf("%u", &n);

    while (count <= num_triangle)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= i; ++j)
            {
                printf("* ");
            }
            printf("\n");
        }
        count++;
    }

    getch();
}