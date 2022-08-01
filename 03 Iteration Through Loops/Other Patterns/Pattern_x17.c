
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int num_triangle, count = 1;

    printf("Enter number of right angle triangles: ");
    scanf("%u", &num_triangle);

    printf("* \n");

    while (count <= num_triangle)
    {
        for (int i = 1; i <= count + 1; ++i)
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