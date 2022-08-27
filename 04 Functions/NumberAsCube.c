/**
Express a number as the sum of cube of two numbers.
4102 = 2^3 + 16^3 = 9^3 + 15^3
**/

#include <stdio.h>
#include <conio.h>

void SumOfCubes(unsigned int);

void main()
{
    unsigned int n;

    printf("Enter limit: ");
    scanf("%u", &n);

    SumOfCubes(n);

    getch();
}

void SumOfCubes(unsigned int n)
{
    unsigned int cube_i, cube_j, cube_k, cube_l, sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        cube_i = i * i * i;

        if (cube_i > n)
        {
            break;
        }

        for (int j = i; j <= n; ++j)
        {
            cube_j = j * j * j;

            if (cube_j + cube_i > n)
            {
                break;
            }

            for (int k = i + 1; k <= n; ++k)
            {
                cube_k = k * k * k;

                if (cube_k > cube_i + cube_j)
                {
                    break;
                }

                for (int l = k; l <= n; ++l)
                {
                    cube_l = l * l * l;

                    if (cube_l + cube_k > cube_i + cube_j)
                    {
                        break;
                    }
                    else if (cube_i + cube_j == cube_k + cube_l)
                    {
                        printf("%u = ", cube_i + cube_j);
                        printf("%u^3 + %u^3 = ", i, j);
                        printf("%u^3 + %u^3", k, l);
                        printf("\n");
                    }
                }
            }
        }
    }
}