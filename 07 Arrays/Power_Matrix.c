
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int r, c;
int **matrix, **temp;

void getArraySize(int **);
void getArrayElements(int **);
void assignArrayElements(int **);
void showArray(int **);
void powerMatrix(int **, short);

void main()
{
    getArraySize(matrix);

    if (c != r)
    {
        printf("\n----- Not a square matrix -----\n----- Therefore cannot compute power of matrix -----\n");
    }

    else
    {
        matrix = malloc(r * sizeof(int *));
        getArrayElements(matrix);

        printf("\nThe matrix formed is:-\n");
        showArray(matrix);

        short int p;
        printf("\nEnter power of matrix: ");
        scanf("%hu", &p);

        if (p == 1)
        {
            showArray(matrix);
        }
        else
        {
            assignArrayElements(matrix);
            powerMatrix(matrix, p);
        }

        free(matrix);
        free(temp);
    }

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
        matrix[i] = malloc(c * sizeof(int *));

        for (int j = 0; j < c; j++)
        {
            printf("Enter a%d%d : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void assignArrayElements(int **matrix)
{
    temp = malloc(r * sizeof(int *));

    for (int i = 0; i < r; i++)
    {
        temp[i] = malloc(c * sizeof(int));

        for (int j = 0; j < c; j++)
        {
            temp[i][j] = matrix[i][j];
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

void powerMatrix(int **matrix, short int power)
{
    int **resultant_matrix = malloc(r * sizeof(int *));
    int sum_elements = 0;

    printf("\n Matrix A^%hu is:-\n", power);

    while (power > 1)
    {
        for (int i = 0; i < r; i++)
        {
            resultant_matrix[i] = malloc(c * sizeof(int));

            for (int j = 0; j < c; j++)
            {
                for (int k = 0; k < r; k++)
                {
                    sum_elements += (temp[i][k] * matrix[k][j]);
                }
                resultant_matrix[i][j] = sum_elements;
                sum_elements = 0;
            }
        }

        free(temp);
        assignArrayElements(resultant_matrix);
        power--;
    }

    showArray(resultant_matrix);
    free(resultant_matrix);
}