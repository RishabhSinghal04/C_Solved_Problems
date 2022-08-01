#include <stdio.h>
#include <conio.h>

void main()
{
    int num, product = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= 10; i++)
    {
        product = num * i;
        printf("%2d X %2d = %2d", num, i, product);
        printf("\n");
    }

    getch();
}