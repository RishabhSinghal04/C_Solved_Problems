#include <stdio.h>
#include <conio.h>

void main()
{
    printf("Enter a character: ");
    getchar();
    
    int count = 2;
    int num = 435;
    while (num)
    {
        count++;
        printf("%d\n", num >>= 2);
    }
    printf("count %d", count);
    getch();
}