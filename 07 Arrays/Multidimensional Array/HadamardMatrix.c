// A program to generate Hadamard Matrix

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void displayMatrix(int **, unsigned short, unsigned short);
void generateHadamardMatrix(int **, unsigned short);

void main()
{
    unsigned short n;
    int **matrix;
    unsigned int size;

    printf("Enter exponent raised to 2: ");
    scanf("%hu", &n);

    size = (unsigned int)pow(2, n);

    matrix = (int **)calloc(n, sizeof(int *));

    for (int i = 0; i < size; ++i)
    {
        matrix[i] = (int *)calloc(size, sizeof(int));
    }

    generateHadamardMatrix(matrix, size);

    printf("\nHadamard Matrix of order :-\n");
    displayMatrix(matrix, size, size);

    free(matrix);

    getch();
}

void displayMatrix(int **matrix, unsigned short nRows, unsigned short nColumns)
{
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void generateHadamardMatrix(int **matrix, unsigned short size)
{
    matrix[0][0] = 1; // 1st row and 1st column

    for (int i = 1; i < size; i += i)
    {
        for (int j = 0; j < i; ++j)
        {
            for (int k = 0; k < i; ++k)
            {
                matrix[j][k + i] = matrix[j][k];
                matrix[j + i][k] = matrix[j][k];
                matrix[j + i][k + i] = -matrix[j][k];
            }
        }
    }
}