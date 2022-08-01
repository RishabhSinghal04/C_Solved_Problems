
#include <stdio.h>
#include <conio.h>

void main()
{
    for (int i = 0; i <= 255; ++i)
    {
        printf("%3u : %c\n\n", i, i);
    }

    getch();
}