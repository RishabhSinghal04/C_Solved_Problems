#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int min = -2, max = 2;
    srand(time(NULL));

    printf("%d\n", rand() % 10); // Generates a random number from 0 to 9

    for (int i = 1; i < 10; i++)
    {
        printf("%d  ", (rand() % (max - min + 1)) + min); // Generates random number from -2 to 2
    }
    
    getch();
}