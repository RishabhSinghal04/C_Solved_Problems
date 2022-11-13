// A program to interchange rows and columns of a matrix

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initializeMatrix(int **, unsigned short, unsigned short);
void displayMatrix(int **, unsigned short, unsigned short);
void TransposeMatrix(int **, unsigned short, unsigned short);

void main()
{
    unsigned short nRows, nColumns;
    int **matrix;

    printf("Enter number of rows: ");
    scanf("%hu", &nRows);

    printf("Enter number of columns: ");
    scanf("%hu", &nColumns);

    // Process to create the structure of a matrix of nRows and nColumns
    matrix = (int **)calloc(nRows, sizeof(int *));
    for (int i = 0; i < nRows; ++i)
    {
        matrix[i] = (int *)calloc(nColumns, sizeof(int));
    }

    initializeMatrix(matrix, nRows, nColumns);

    printf("\nArray in matrix form is:-\n");
    displayMatrix(matrix, nRows, nColumns);

    printf("\nTranspose of the matrix is:-\n");
    TransposeMatrix(matrix, nRows, nColumns);

    free(matrix);
    getch();
}

void initializeMatrix(int **matrix, unsigned short nRows, unsigned short nColumns)
{
    short min = -100, max = 100;
    srand(time(NULL));

    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            matrix[i][j] = rand() % (max - min + 1) + min;
        }
    }
}

void displayMatrix(int **matrix, unsigned short nRows, unsigned short nColumns)
{
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void TransposeMatrix(int **matrix, unsigned short nRows, unsigned short nColumns)
{
    int **transpose_matrix = (int **)calloc(nColumns, sizeof(int *));

    for (int i = 0; i < nColumns; ++i)
    {
        transpose_matrix[i] = (int *)calloc(nRows, sizeof(int));
    }

    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            transpose_matrix[j][i] = matrix[i][j];
        }
    }
    displayMatrix(transpose_matrix, nColumns, nRows);
}