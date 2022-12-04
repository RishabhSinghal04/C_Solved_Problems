
#include <stdio.h>
#include <conio.h>

void main()
{
    enum Coordinate
    {
        x = 0,
        y = 1,
        z = 0
    };

    enum Basic
    {
        a = 1,
        b = 1,
        c,
        d = 2
    };

    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("d = %d", d);

    getch();
}