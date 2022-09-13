/** A program to print Hailstone Sequence and show the number of steps.

Hailstone Sequence :-
Odd Numbers | Even Numbers
 3 x N + 1  |   N / 2

Let N = 7
3 x 7 + 1 = 22, the sequence is 7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1.
**/

#include <stdio.h>
#include <conio.h>

unsigned short HailstoneSequence(unsigned short);

void main()
{
    unsigned short num;

    printf("Enter a number to begin the Hailstone Sequence: ");
    scanf("%hu", &num);

    (num > 0) ? printf("\nNumber of steps: %hu", HailstoneSequence(num)) : printf("No Hailstone Sequence");

    getch();
}

unsigned short HailstoneSequence(unsigned short n)
{
    static short count;

    printf("%u ", n);

    if (n == 1)
    {
        return ++count;
    }
    else if (n % 2 == 0)
    {
        count++;
        HailstoneSequence(n / 2);
    }
    else
    {
        count++;
        HailstoneSequence(3 * n + 1);
    }
}