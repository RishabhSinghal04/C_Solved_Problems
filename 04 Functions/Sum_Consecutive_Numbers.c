/**
A number can be expressed as the sum of two or more than two cosecutive numbers.
Example : 15 = 1 + 2 + 3 + 4 + 5
**/

#include <stdio.h>
#include <conio.h>

void Sum_Consecutive_Numbers(unsigned int);

void main()
{
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    Sum_Consecutive_Numbers(num);

    getch();
}

void Sum_Consecutive_Numbers(unsigned int num)
{
    unsigned int sum_num = 0;

    for (int i = 1; i <= num; ++i)
    {
    }
}