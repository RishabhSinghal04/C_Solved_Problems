// A program to find the index of the smallest integer using recursion

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initializeArrayElements(short *, unsigned short);
void displayArrayElements(short *, unsigned short);

/**
 * @brief  Function to find the index of the smallest integer
 * @param  *: array
 * @param  short: one less than size of array
 * @param  short: pass constant 0
 * @retval
 */
unsigned short minNumberIndex(short *, unsigned short, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of elements: ");
    scanf("%hu", &n);

    short array_num[n];

    initializeArrayElements(array_num, n - 1);

    printf("Elements of array are:-\n");
    displayArrayElements(array_num, n - 1);

    printf("\nIndex of the smallest integer is %hu", minNumberIndex(array_num, n - 1, 0));

    getch();
}

void initializeArrayElements(short array[], unsigned short n)
{
    short min = -1000, max = 1000;

    srand(time(NULL));

    if (n == 0)
    {
        array[0] = rand() % (max - min + 1) + min;
        return;
    }

    initializeArrayElements(array, n - 1);
    array[n] = rand() % (max - min + 1) + min;
}

void displayArrayElements(short array[], unsigned short n)
{
    if (n == 0)
    {
        printf("%hd", array[0]);
        return;
    }

    displayArrayElements(array, n - 1);
    printf(", %hd", array[n]);
}

unsigned short minNumberIndex(short array[], unsigned short n, unsigned short index)
{
    if (index == n)
    {
        return index;
    }

    unsigned short i = minNumberIndex(array, n, index + 1);

    return (array[index] < array[i]) ? index : i;
}