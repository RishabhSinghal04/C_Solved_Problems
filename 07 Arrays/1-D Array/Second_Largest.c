// A program to find second largest integer in an array

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initializeArrayElements(short *, unsigned short);
void displayArrayElements(short *, unsigned short);

void SecondLargestInteger(short *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n);

    printf("Elements of array are:-\n");
    displayArrayElements(array_num, n);

    SecondLargestInteger(array_num, n);

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

void SecondLargestInteger(short array[], unsigned short n)
{
    short max = array[0], second_largest = SHRT_MIN;

    for (int i = 1; i < n; ++i)
    {
        if (array[i] > max)
        {
            second_largest = max;
            max = array[i];
        }
        else if (array[i] > second_largest && array[i] != max)
        {
            second_largest = array[i];
        }
    }

    (second_largest != SHRT_MIN) ? printf("\nSecond largest integer is %hd", second_largest) : printf("\nNo second largest element found");
}