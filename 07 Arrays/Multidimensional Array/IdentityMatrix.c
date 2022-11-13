// A program to check whethter a given matrix is identity matrix or not

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void initializeMatrix(int **, unsigned short, unsigned short);
void displayMatrix(int **, unsigned short, unsigned short);
bool isIdentityMatrix(int **, unsigned short, unsigned short);

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

    isIdentityMatrix(matrix, nRows, nColumns) ? printf("\nThe given matrix is an identity matrix") : printf("\nThe given matrix is not an identity matrix");

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

bool isIdentityMatrix(int **matrix, unsigned short nRows, unsigned short nColumns)
{
    if (nRows != nColumns)
    {
        return false;
    }
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            // left diagonal elements are not 1
            if (i == j && matrix[i][j] != 1)
            {
                return false;
            }
            // other elements are not 0
            if (i != j && matrix[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}