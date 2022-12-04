
#include <stdio.h>
#include <conio.h>

union mixedArray
{
    int n;
    char ch;
    float p;
};

void main()
{
    union mixedArray array[5];

    array[0].n = 10;
    array[1].ch = 'A';
    array[2].p = 4.94;
    array[3].n = 74;
    array[4].p = 72.72;

    printf("\nElement at index %u is %u", 0, array[0].n);
    printf("\nElement at index %u is %c", 1, array[1].ch);
    printf("\nElement at index %u is %f", 2, array[2].p);
    printf("\nElement at index %u is %u", 3, array[3].n);
    printf("\nElement at index %u is %f", 4, array[4].p);

    getch();
}