//

#include <stdio.h>
#include <conio.h>

void ArraySize(int *array)
{
    printf("After Call by Reference\nSize of array (sizeof operator) is %d\n", sizeof(array) / sizeof(array[0]));
    printf("Size of array (pointer hack) is %d\n", *(&array + 1));
}

void main()
{
    int array[10];

    printf("Size of array is %d\n", sizeof(array) / sizeof(array[0]));

    ArraySize(array);

    getch();
}