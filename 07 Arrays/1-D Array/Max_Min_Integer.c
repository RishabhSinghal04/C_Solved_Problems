// A program to find minimum and maximum integer in an array

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initializeArrayElements(short *, unsigned short);
void displayArrayElements(short *, unsigned short);

short MaxInteger(short *, unsigned short);
short MinInteger(short *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n);

    printf("Elements of array are:-\n");
    displayArrayElements(array_num, n);

    printf("\nMaximum Integer is %hd\nMinimum Integer is %hd", MaxInteger(array_num, n), MinInteger(array_num, n));

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

short MaxInteger(short array[], unsigned short n)
{
    short max, index;

    if (n % 2 == 0) // If total number of elements are even
    {
        if (array[0] > array[1])
        {
            max = array[0];
        }
        else
        {
            max = array[1];
        }

        index = 2;
    }
    else // If total number of elements are odd
    {
        max = array[0];
        index = 1;
    }

    while (index < n - 1)
    {
        if (array[index] > array[index + 1]) // When array[index] is greater than array[index + 1]
        {
            if (array[index] > max)
            {
                max = array[index];
            }
        }
        else // When array[index + 1] is greater than array[index]
        {
            if (array[index + 1] > max)
            {
                max = array[index + 1];
            }
        }
        index += 2;
    }
    return max;
}

short MinInteger(short array[], unsigned short n)
{
    short min, index;

    if (n % 2 == 0) // If total number of elements are even
    {
        if (array[0] < array[1])
        {
            min = array[0];
        }
        else
        {
            min = array[1];
        }

        index = 2;
    }
    else // If total number of elements are odd
    {
        min = array[0];
        index = 1;
    }

    while (index < n - 1)
    {
        if (array[index] < array[index + 1]) // When array[index] is smaller than array[index + 1]
        {
            if (array[index] < min)
            {
                min = array[index];
            }
        }
        else // When array[index + 1] is smaller than array[index]
        {
            if (array[index + 1] < min)
            {
                min = array[index + 1];
            }
        }
        index += 2;
    }
    return min;
}