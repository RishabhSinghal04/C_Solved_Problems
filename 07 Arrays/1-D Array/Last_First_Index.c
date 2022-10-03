// A program to insert element(presnt at the last index) at the first index

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initializeArray(short *, unsigned short);
void displayArray(short *, unsigned short);
void insertElement(short *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArray(array_num, n);

    printf("Elements of array are:-\n");
    displayArray(array_num, n);

    insertElement(array_num, n);

    printf("\nArray after inserting last element at first position:-\n");
    displayArray(array_num, n);

    getch();
}

void initializeArray(short array[], unsigned short n)
{
    short min = -1000, max = 1000;
    srand(time(NULL));

    for (int i = 0; i < n; ++i)
    {
        array[i] = rand() % (max - min + 1) + min;
    }
}

void displayArray(short array[], unsigned short n)
{
    printf("%hd", array[0]);

    for (int i = 1; i < n; ++i)
    {
        printf(", %hd", array[i]);
    }
}

void insertElement(short array[], unsigned short n)
{
    short temp = array[n - 1];

    for (int i = n - 1; i > 0; --i)
    {
        array[i] = array[i - 1];
    }

    array[0] = temp;
}