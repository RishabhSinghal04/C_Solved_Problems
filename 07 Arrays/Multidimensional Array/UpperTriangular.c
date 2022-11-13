// A program to convert a matrix in upper triangular form

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initializeMatrix(int **, unsigned short, unsigned short);
void displayMatrix(int **, unsigned short, unsigned short);
void displayUpperTriangularMatrix(int **, unsigned short, unsigned short);

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

    printf("\nUpper triangular matrix is:-\n");
    displayUpperTriangularMatrix(matrix, nRows, nColumns);

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

void displayUpperTriangularMatrix(int **matrix, unsigned short nRows, unsigned short nColumns)
{
    if(nRows != nColumns)
    {
        printf("\nNot a Square Matrix");
        return;
    }

    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            if (i > j)
            {
                matrix[i][j] = 0;
            }
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}