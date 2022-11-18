// A program to find determinant of matrix

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void initializeMatrix(short **, unsigned short, unsigned short);
void displayMatrix(short **, unsigned short, unsigned short);

int Determinant(short **, unsigned short);

void main()
{
    short **matrix;
    unsigned short n;

    printf("Enter size of square matrix: ");
    scanf("%hu", &n);

    matrix = (short **)calloc(n, sizeof(short *));
    for (int i = 0; i < n; ++i)
    {
        matrix[i] = (short *)calloc(n, sizeof(short));
    }

    initializeMatrix(matrix, n, n);

    printf("\nMatrix of order %hu X %hu is:-\n", n, n);
    displayMatrix(matrix, n, n);

    printf("Determinant of the matrix is : %d", Determinant(matrix, n));

    free(matrix);

    getch();
}

void initializeMatrix(short **matrix, unsigned short nRows, unsigned short nColumns)
{
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            printf("Enter A%u%u: ", i + 1, j + 1);
            scanf("%hd", &matrix[i][j]);
        }
    }
}

void displayMatrix(short **matrix, unsigned short nRows, unsigned short nColumns)
{
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            printf("%2hd ", matrix[i][j]);
        }
        printf("\n");
    }
}

int Determinant(short **matrix, unsigned short n)
{
    if (n == 1) // 1 X 1
    {
        return matrix[0][0];
    }
    else if (n == 2) // 2 X 2
    {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }
    else
    {
        short sign = 1, basic, **matrix2 = (short **)calloc(n - 1, sizeof(short *));
        unsigned short index = 0;
        int sub_determinant = 0, determinant = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            matrix2[i] = (short *)calloc(n - 1, sizeof(short));
        }

        for (int i = 0; i < n; ++i)
        {
            basic = matrix[0][i]; // Store elements of 1st row

            // Process to initialize inner matrix
            for (int j = 1; j < n; ++j)
            {
                index = 0;
                for (int k = 0; k < n; ++k)
                {
                    if (k == i) // Exclude ith column
                        ; // Do nothing
                    else
                    {
                        // Initializing inner matrix excluding elements of 1st row and ith column
                        matrix2[j - 1][index++] = matrix[j][k];
                    }
                }
            }
            sub_determinant = sign * basic * Determinant(matrix2, n - 1);
            determinant += sub_determinant;
            sign = -1 * sign;
            free(matrix2);
        }
        return determinant;
    }
}