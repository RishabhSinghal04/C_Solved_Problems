/* A program to generate Magic Square

17  24   1   8  15
23   5   7  14  16
 4   6  13  20  22
10  12  19  21   3
11  18  25   2   9

Sum of diagonal = Sum of row = Sum of column = 65 for n = 5
n = 3, sum = 15
n = 5, sum = 65
n = 7, sum = 175
n , sum = n*(n*n+1)/2
                 ^
    /|    /|    /|
   / |   / |   / |
  /  |  /  |  /  |
 /   | /   | /   |
/    |/    |/    |
^
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void displayMagicSquare(int **, unsigned short, unsigned short);
void generateMagicSquare(int **, unsigned short);

void main()
{
    unsigned short n;
    int **matrix;

    printf("Enter an odd number: ");
    scanf("%hu", &n);

    if (n % 2 == 1)
    {
        matrix = (int **)calloc(n, sizeof(int *));

        for (int i = 0; i < n; ++i)
        {
            matrix[i] = (int *)calloc(n, sizeof(int));
        }

        printf("\nPre calculated sum is %lu\n", n * (n * n + 1) / 2);

        generateMagicSquare(matrix, n);

        printf("\nMagic Square:-\n");
        displayMagicSquare(matrix, n, n);
    }
    else
    {
        printf("\nNot an odd number\n");
    }

    free(matrix);

    getch();
}

void displayMagicSquare(int **matrix, unsigned short nRows, unsigned short nColumns)
{
    long sum_diagonal = 0;

    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            if (i == j)
            {
                sum_diagonal += matrix[i][j];
            }
            printf(" %4d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nSum is %lu", sum_diagonal);
}

void generateMagicSquare(int **matrix, unsigned short n)
{
    short row = 0, column = n / 2;

    for (int i = 0; i < n * n; ++i)
    {
        matrix[row][column] = i + 1;
        row--;
        column++;

        if (row < 0 && column > n - 1) // Top right corner
        {
            row += 2;
            column--;
        }
        else if (row < 0) // Top
        {
            row = n - 1;
        }
        else if (column > n - 1) // Right
        {
            column = 0;
        }
        else if (matrix[row][column] != 0) // Preoccupied
        {
            row += 2;
            column--;
        }
    }
}