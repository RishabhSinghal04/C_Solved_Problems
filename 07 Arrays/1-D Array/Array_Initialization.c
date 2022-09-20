//

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void initializeArray(int *, unsigned short);
void displayArrayElements(int *, unsigned short);

void main()
{
    unsigned short n1, n2;

    printf("Enter size of first array: ");
    scanf("%hu", &n1);

    printf("Enter size of second array: ");
    scanf("%hu", &n2);

    int array1[n1], array2[n2];

    initializeArray(array1, n1);

    printf("Array 1 :-\n");
    displayArrayElements(array1, n1);

    initializeArray(array2, n2);

    printf("Array 2 :-\n");
    displayArrayElements(array2, n2);

    getch();
}

void initializeArray(int array[], unsigned short n)
{
    int min = -1000, max = 10000;

    srand(time(NULL));

    for (int i = 0; i < n; ++i)
    {
        array[i] = (rand() % (max - min + 1)) + min;
    }
}

void displayArrayElements(int array[], unsigned short n)
{
    printf("%d", array[0]);

    for (int i = 1; i < n; ++i)
    {
        printf(", %d", array[i]);
    }

    printf("\n");
}