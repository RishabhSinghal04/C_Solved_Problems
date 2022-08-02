#include <stdio.h>
#include <conio.h>

void main()
{
    int num, i = 2;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 1)
    {
        while (num % i == 0)
        {
            printf("%d  ", i);
            num /= i;
        }
        i++;
    }
    
    getch();
}