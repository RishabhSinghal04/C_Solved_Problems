// A program to find second largest integer in an array

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initializeArrayElements(short *, unsigned short);
void displayArrayElements(short *, unsigned short);

void secondLargestInteger(short *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n);

    printf("Elements of array are:-\n");
    displayArrayElements(array_num, n);

    secondLargestInteger(array_num, n);

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

void secondLargestInteger(short array[], unsigned short n)
{
    short max, sec_max, index;

    if (n % 2 == 0) // If total number of elements are even
    {
        if (array[0] > array[1])
        {
            max = array[0];
            sec_max = array[1];
        }
        else
        {
            max = array[1];
            sec_max = array[0];
        }

        index = 2;
    }
    else // If total number of elements are odd
    {
        max = array[0];
        sec_max = SHRT_MIN;
        index = 1;
    }

    while (index < n - 1)
    {
        if (array[index] > array[index + 1]) // When array[index] is greater than array[index + 1]
        {
            if (array[index] > max)
            {
                sec_max = max;
                max = array[index];
            }
            if (array[index + 1] > sec_max)
            {
                sec_max = array[index + 1];
            }
            if (array[index] > sec_max && array[index] != max)
            {
                sec_max = array[index];
            }
        }
        else // When array[index + 1] is greater than array[index]
        {
            if (array[index + 1] > max)
            {
                sec_max = max;
                max = array[index + 1];
            }
            if (array[index] > sec_max)
            {
                sec_max = array[index];
            }
            if (array[index + 1] > sec_max && array[index + 1] != max)
            {
                sec_max = array[index + 1];
            }
        }
        index += 2;
    }
    (sec_max == SHRT_MIN) ? printf("\nNo second largest integer") : printf("\nMaximum Integer is %hd\nSecond Largest Integer is %hd", max, sec_max);
}