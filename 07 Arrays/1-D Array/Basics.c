
#include <stdio.h>
#include <conio.h>

#define N 10 // define the size of array

void main()
{
    int array_num[N] = {0};

    printf("Every element of array is initialized with value 0");

    for (int i = 0; i < N; ++i)
    {
        printf("\nElement %2d = %d", i + 1, array_num[i]);
    }

    int array_num2[] = {[1] = 1, [3] = 2, [5] = 3, [7] = 4, [9] = 5};

    printf("\nEvery odd element of array is initialized with value 0");

    for (int i = 0; i < N; ++i)
    {
        printf("\nElement %2d = %d", i + 1, array_num2[i]);
    }

    getch();
}