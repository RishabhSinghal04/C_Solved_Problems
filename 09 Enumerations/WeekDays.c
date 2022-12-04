// A program to print weekdays number

#include <stdio.h>
#include <conio.h>

enum Weekdays
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

void main()
{
    for (int i = Monday; i <= Sunday; ++i)
    {
        printf("%u ", i);
    }

    getch();
}