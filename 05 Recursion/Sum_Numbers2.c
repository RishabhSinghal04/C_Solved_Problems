// A program to print sum of numbers in a given range.

#include <stdio.h>
#include <conio.h>

int SumNumbers(short, short);

void main()
{
    short n1, n2, min_num = 0, max_num = 0;
    int sum_num = 0;

    printf("Enter range from n1 to n2: ");
    scanf("%hu %hu", &n1, &n2);

    max_num = (n1 < n2) ? n2 : n1;
    min_num = (n1 < n2) ? n1 : n2;

    sum_num = SumNumbers(min_num, max_num);

    printf("Sum of numbers from %hd to %hd is %d", min_num, max_num, sum_num);

    getch();
}

int SumNumbers(short n1, short n2)
{
    if (n1 >= n2)
    {
        return ((n1 + n2) % 2 == 0) ? n1 : 0;
        /*Example:-
        From range 1 to 5 -> (3 >= 3) and 3 + 3 = 6 -> 6 % 2 = 0.
        From range 1 to 10 -> (6 >= 5) and 6 + 5 = 11 -> 11 % 2 = 1.
        */
    }

    return n1 + n2 + SumNumbers(n1 + 1, n2 - 1);
}