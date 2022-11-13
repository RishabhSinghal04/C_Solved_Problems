// A program to find second smallest integer in an array

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initializeArrayElements(short *, unsigned short);
void displayArrayElements(short *, unsigned short);

void secondSmallestInteger(short *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n);

    printf("Elements of array are:-\n");
    displayArrayElements(array_num, n);

    secondSmallestInteger(array_num, n);

    getch();
}

void initializeArrayElements(short array[], unsigned short n)
{
    short min = -1000, max = 1000;
    srand(time(NULL));

    for (int i = 0; i < n; ++i)
    {
        array[i] = rand() % (max - min + 1) + min;
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

void secondSmallestInteger(short array[], unsigned short n)
{
    short min, sec_min, index;

    if (n % 2 == 0) // If total number of elements are even
    {
        if (array[0] > array[1])
        {
            min = array[1];
            sec_min = array[0];
        }
        else
        {
            min = array[0];
            sec_min = array[1];
        }

        index = 2;
    }
    else // If total number of elements are odd
    {
        min = array[0];
        sec_min = SHRT_MAX;
        index = 1;
    }

    while (index < n - 1)
    {
        if (array[index] < array[index + 1]) // When array[index] is smaller than array[index + 1]
        {
            if (array[index] < min)
            {
                sec_min = min;
                min = array[index];
            }
            if (array[index + 1] < sec_min)
            {
                sec_min = array[index + 1];
            }
            if (array[index] < sec_min && array[index] != min)
            {
                sec_min = array[index];
            }
        }
        else // When array[index + 1] is smaller than array[index]
        {
            if (array[index + 1] < min)
            {
                sec_min = min;
                min = array[index + 1];
            }
            if (array[index] < sec_min)
            {
                sec_min = array[index];
            }
            if (array[index + 1] < sec_min && array[index + 1] != min)
            {
                sec_min = array[index + 1];
            }
        }
        index += 2;
    }
    (sec_min == SHRT_MAX) ? printf("\nNo second smallest integer") : printf("\nMaximum Integer is %hd\nSecond Smallest Integer is %hd", min, sec_min);
}