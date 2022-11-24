// A program to print matrix in spiral order

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initializeMatrix(short **, unsigned short, unsigned short);
void displayMatrix(short **, unsigned short, unsigned short);

void displaySpiralMatrix(short **, unsigned short, unsigned short);

void main()
{
    short **matrix;
    unsigned short nRows, nColumns;

    printf("Enter number of rows: ");
    scanf("%hu", &nRows);
    printf("Enter number of columns: ");
    scanf("%hu", &nColumns);

    matrix = (short **)calloc(nRows, sizeof(short *));
    for (int i = 0; i < nRows; ++i)
    {
        matrix[i] = (short *)calloc(nColumns, sizeof(short));
    }

    initializeMatrix(matrix, nRows, nColumns);

    printf("\nMatrix of order %hu X %hu is:-\n", nRows, nColumns);
    displayMatrix(matrix, nRows, nColumns);

    printf("\nMatrix in spiral order is:-\n");
    displaySpiralMatrix(matrix, nRows, nColumns);

    free(matrix);

    getch();
}

void initializeMatrix(short **matrix, unsigned short nRows, unsigned short nColumns)
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

void displayMatrix(short **matrix, unsigned short nRows, unsigned short nColumns)
{
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nColumns; ++j)
        {
            printf("%3hd ", matrix[i][j]);
        }
        printf("\n");
    }
}

void displaySpiralMatrix(short **matrix, unsigned short nRows, unsigned short nColumns)
{
    unsigned short direction = 0, top = 0, bottom = nRows - 1, left = 0, right = nColumns - 1;

    while (left <= right && top <= bottom)
    {
        if (direction == 0) // From left to right
        {
            for (int i = left; i <= right; ++i)
            {
                printf("%hd  ", matrix[top][i]);
            }
            top++;
        }
        else if (direction == 1) // From top to bottom
        {
            for (int i = top; i <= bottom; ++i)
            {
                printf("%hd  ", matrix[i][right]);
            }
            right--;
        }
        else if (direction == 2) // From right to left
        {
            for (int i = right; i >= left; --i)
            {
                printf("%hd  ", matrix[bottom][i]);
            }
            bottom--;
        }
        else if (direction == 3) // From bottom to top
        {
            for (int i = bottom; i >= top; --i)
            {
                printf("%hd  ", matrix[i][left]);
            }
            left++;
        }
        direction = ++direction % 4;
    }
}