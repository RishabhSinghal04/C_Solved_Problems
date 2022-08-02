/**
A game of throwing dice is played between two players in which each player throws a dice unless his score adds up to 20. 
A player is declared 'Winner' with the minimum number of throws. 
Write a program to perform the task given above.
**/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    unsigned int rand_num, sum_p1 = 0, sum_p2 = 0, count_p1 = 0, count_p2 = 0;

    srand(time(NULL));

    printf("\nPlayer 1 is throwing dice:-\n");

    while (sum_p1 <= 20)
    {
        // Generates random number from 1 to 6
        rand_num = (rand() % 6) + 1;
        count_p1++;
        sum_p1 += rand_num;

        printf("Throw %u: %u\n", count_p1, rand_num);
    }

    printf("\nPlayer 2 is throwing dice:-\n");

    while (sum_p2 <= 20)
    {
        // Generates random number from 1 to 6
        rand_num = (rand() % 6) + 1;
        count_p2++;
        sum_p2 += rand_num;

        printf("Throw %u: %u\n", count_p2, rand_num);
    }

    if (count_p1 == count_p2)
    {
        printf("\nIt's a Tie");
    }
    else if (count_p1 < count_p2)
    {
        printf("\nPlayer 1 is the winner");
    }
    else
    {
        printf("\nPlayer 2 is the winner");
    }

    getch();
}