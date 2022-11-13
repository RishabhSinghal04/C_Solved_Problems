// A program to delete an element at a given position in an array of integers

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void inputArrayElements(short *, unsigned short);
void displayArrayElements(short *, unsigned short);
void deleteElement(short *, unsigned short *, unsigned short);

void main()
{
    unsigned short n, pos;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    inputArrayElements(array_num, n);

    printf("Elements of array are:-\n");
    displayArrayElements(array_num, n);

    printf("\nEnter position at which element needs to be deleted: ");
    scanf("%hu", &pos);

    deleteElement(array_num, &n, pos);

    printf("\nElements of array after deletion are:-\n");
    displayArrayElements(array_num, n);

    getch();
}

void inputArrayElements(short array[], unsigned short n)
{
    short min = -1000, max = 1000;
    srand(time(NULL));

    for (int i = 0; i < n; ++i)
    {
        array[i] = rand() % (max - min + 100) + min;
    }
}

void displayArrayElements(short array[], unsigned short n)
{
    printf("%hd", array[0]);

    for (int i = 1; i < n; ++i)
    {
        printf(", %hd", array[i]);
    }
}

void deleteElement(short array[], unsigned short *n, unsigned short pos)
{
    if (pos > *n)
    {
        printf("\nOut of index");
        return;
    }

    pos = pos - 1;

    for (int i = pos; i < *n - 1; ++i)
    {
        array[i] = array[i + 1];
    }

    *n -= 1;
}