
#include <stdio.h>
#include <conio.h>

#define R 2
#define C 2

void main()
{
    int num[R][C];
    printf("Enter matrix (2 X 2) elements:-\n");
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("At a%d%d: ", i + 1, j + 1);
            scanf("%d", &num[i][j]);
        }
    }

    printf("Matrix is:-\n");

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%d\t", num[i][j]);
        }
        printf("\n");
    }

    getch();
}