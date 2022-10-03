// A program to insert element(presnt at the first index) at the last index using recursion

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initializeArray(short *, unsigned short);
void displayArray(short *, unsigned short);
void insertElement(short *, unsigned short);
void MoveElements(short *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArray(array_num, n - 1);

    printf("Elements of array are:-\n");
    displayArray(array_num, n - 1);

    insertElement(array_num, n - 1);

    printf("\nArray after inserting first element at last position:-\n");
    displayArray(array_num, n - 1);

    getch();
}

void initializeArray(short array[], unsigned short n)
{
    short min = -1000, max = 1000;
    srand(time(NULL));

    if (n == 0)
    {
        array[0] = rand() % (max - min + 1) + min;
        return;
    }

    initializeArray(array, n - 1);
    array[n] = rand() % (max - min + 1) + min;
}

void displayArray(short array[], unsigned short n)
{
    if (n == 0)
    {
        printf("%hd", array[0]);
        return;
    }

    displayArray(array, n - 1);
    printf(", %hd", array[n]);
}

void insertElement(short array[], unsigned short n)
{
    short temp = array[0];

    MoveElements(array, n - 1);
    array[n] = temp;
}

void MoveElements(short array[], unsigned short n)
{
    if (n == 0)
    {
        array[n] = array[n + 1];
        return;
    }

    MoveElements(array, n - 1);
    array[n] = array[n + 1];
}