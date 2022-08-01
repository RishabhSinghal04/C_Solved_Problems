#include <stdio.h>
#include <conio.h>

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d can be expressed as the sum of following consecutive natural numbers: ", num);
    
    for (int i = 1; i < num; i++)
    {
        if (i + (i + 1) == num)
            printf("%d + %d = %d", i, i + 1, i + (i + 1));
    }
    
    getch();
}