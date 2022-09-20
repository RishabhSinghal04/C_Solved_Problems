
#include <stdio.h>
#include <conio.h>

#define N 10 // define the size of array

void main()
{
    int array[N] = {};

    printf("Odd elements of array are initialized with 0:-");

    for (int i = 0; i < N; ++i)
    {
        if (i % 2 != 0)
        {
            array[i] = i;
        }
        printf("\nElement %2d = %d", i + 1, array[i]);
    }

    unsigned short n;

    printf("\nEnter total number of elements in array: ");
    scanf("%hu", &n);

    long array2[n]; // Variable Size Array

    for (short i = 0; i < n; ++i)
    {
        printf("\n%ld", array2[i]);
    }

    getch();
}