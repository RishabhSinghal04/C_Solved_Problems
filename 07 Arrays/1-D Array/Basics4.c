// Pointing to an array

#include <stdio.h>
#include <conio.h>

void main()
{
    int *value;

    int array_num[] = {1, 3, -9, -5, 4, 2, 7, 1, -1, 5, 6, 10};

    // Value of first element
    value = &array_num[0];
    printf("Element at 1st position is %d\n", *value);

    // Value of 2nd element
    value += 1;
    printf("Element at 2nd postion is %d\n", *value);
    
    // Value at 12th position
    value += 10;
    printf("Element at 12th postion is %d\n", *value);

    getch();
}