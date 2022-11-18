// A program to reverse an array of integers

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void inputArrayElements(short *, unsigned short);
void displayArrayElements(short *, unsigned short);

/**
 * @brief  Function to reverse an array of integers
 * @param  *: array
 * @param  short: size of array
 * @retval None
 */
void Reverse(short *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    inputArrayElements(array_num, n);

    printf("Elements of array are:-\n");
    displayArrayElements(array_num, n);

    Reverse(array_num, n);

    printf("\nReverse:-\n");
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

void Reverse(short *array, unsigned short n)
{
    short temp;

    for (int i = 0; i < n / 2; ++i)
    {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}