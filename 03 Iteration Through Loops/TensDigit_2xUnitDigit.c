/**
Write a program to input all two digit numbers between 10 and 99 (both inclusive).
The program displays only those numbers whose the tens digit is twice the units digit. 

Sample Output: 12, 24, 36
**/

#include <stdio.h>
#include <conio.h>

void main()
{
    printf("Number from 10 to 99(both inclusive) which have twice the tens digit than unit digit are:-\n%d", 12);

    for (int i = 24; i <= 99; ++i)
    {
        if (i % 10 == 2 * (i / 10))
        {
            printf(", %d", i);
        }
    }

    getch();
}