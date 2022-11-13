/*
A program to check whethter a given matrix is a sparse matrix or not.
If it is a sparse matrix then represnt it.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void initializeMatrix(int **, unsigned short, unsigned short);
void displayMatrix(int **, unsigned short, unsigned short);
void representSparseMatrix(int **, unsigned short, unsigned short);

bool isSparseMatrix(int **, unsigned short, unsigned short);

void main()
{
    unsigned short nRows, nColumns;
    int **matrix;
    bool flag = true;

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

    flag = isSparseMatrix(matrix, nRows, nColumns);

    if (flag)
    {
        printf("\nThe given matrix is a sparse matrix");
        representSparseMatrix(matrix, nRows, nColumns);
    }
    else
    {
        printf("\nThe given matrix is not an sparse matrix");
    }

    free(matrix);
    getch();
}

void initializeMatrix(int **matrix, unsigned short nRows, unsigned short nColumns)
{
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            printf("Enter A%u%u: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
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

bool isSparseMatrix(int **matrix, unsigned short nRows, unsigned short nColumns)
{
    unsigned short count_zero = 0;

    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            if (matrix[i][j] == 0)
            {
                count_zero++;
            }
        }
    }
    return (count_zero > (int)((nRows * nColumns) / 2)) ? true : false;
}

void representSparseMatrix(int **matrix, unsigned short nRows, unsigned short nColumns)
{
    unsigned short count = 0, nonZeroCount = 0;

    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            if (matrix[i][j] != 0)
            {
                nonZeroCount++;
            }
        }
    }

    int **sparse_matrix = (int **)calloc(3, sizeof(int *));

    for (int i = 0; i < 3; ++i)
    {
        sparse_matrix[i] = (int *)calloc(nonZeroCount, sizeof(int));
    }

    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            if (matrix[i][j] != 0)
            {
                sparse_matrix[0][count] = i;
                sparse_matrix[1][count] = j;
                sparse_matrix[2][count] = matrix[i][j];
                count++;
            }
        }
    }
    printf("\nRepresentation :-\n");
    displayMatrix(sparse_matrix, 3, nonZeroCount);
}