// A progam to store table of numbers in a Double Dimensional Array.
#include <stdio.h>
#include <conio.h>

#define M 4
#define N 10

int num_table[M][N];

void NumberTable(int *, int);

void printArray(int *, int);

void main()
{
    int num1, num2, num3, num4;

    printf("Enter four(4) numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    NumberTable(num_table[N], num1);
    NumberTable(num_table[N], num2);
    NumberTable(num_table[N], num3);
    NumberTable(num_table[N], num4);

    getch();
}

void NumberTable(int num_table[], int num)
{
    for (int i = 0; i < N; i++)
        num_table[i] = num * (i + 1);

    printArray(num_table, num);
}

void printArray(int num_table[], int num)
{
    printf("Table of %d is as follows:-\n",num);

    for (int i = 0; i < N; i++)
        printf("%d X %2d = %4d\n", num, i + 1, num_table[i]);

    printf("\n*************************\n");
}