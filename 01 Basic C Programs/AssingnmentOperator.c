#include <stdio.h>
#include <conio.h>

void main()
{
    int var = 0, num;
    num = (var = 15, var + 35); // var = 15 --> 15 + 35 = 50 --> num = 50
    printf("%d", num);
    getch();
}