// A program to print month numbers

#include <stdio.h>
#include <conio.h>

enum Weekdays
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

void main()
{
    for (int i = January; i <= December; ++i)
    {
        printf("%u ", i);
    }

    getch();
}