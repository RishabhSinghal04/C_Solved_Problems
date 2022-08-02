
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int r, c;
int **matrix;

void getArraySize(int **);
void getArrayElements(int **);
void showArray(int **);
void transposeMatrix(int **);

void main()
{
    getArraySize(matrix);
    matrix = malloc(r  * sizeof(int *));

    getArrayElements(matrix);

    printf("\nThe matrix formed is:-\n");
    showArray(matrix);

    printf("\n Transpose of the given matrix is:-\n");
    transposeMatrix(matrix);

    free(matrix);
    getch();
}

void getArraySize(int **matrix)
{
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);
}

void getArrayElements(int **matrix)
{
    for (int i = 0; i < r; i++)
    {
        matrix[i] = malloc(c  * sizeof(int *));
        
        for (int j = 0; j < c; j++)
        {
            printf("Enter a%d%d : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void showArray(int **matrix)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%5d  ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int **matrix)
{
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%5d  ", matrix[j][i]);
        }
        printf("\n");
    }
}