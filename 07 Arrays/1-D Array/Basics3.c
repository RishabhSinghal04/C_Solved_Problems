// Pointing to an array

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initializeArray(int *, unsigned short);
void displayArrayElements(int *, unsigned short);

int *findMidElement(int array[], int n);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    int array_num[n], *mid;
    initializeArray(array_num, n);

    printf("\nArray elements are:-\n");
    displayArrayElements(array_num, n);

    mid = findMidElement(array_num, n);
    printf("Element at middle position is %d", *mid);

    getch();
}

void initializeArray(int array[], unsigned short n)
{
    int min = -1000, max = 1000;

    srand(time(NULL));

    for (int i = 0; i < n; ++i)
    {
        array[i] = (rand() % (max - min + 1)) + min;
    }
}

void displayArrayElements(int array[], unsigned short n)
{
    printf("%d", array[0]);

    for (int i = 1; i < n; ++i)
    {
        printf(", %d", array[i]);
    }

    printf("\n");
}

int *findMidElement(int array[], int n)
{
    return &array[n / 2];
}