
#include <stdio.h>
#include <conio.h>

void main()
{
    int num, temp, min_digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    min_digit = num % 10;

    if (min_digit == 0)
    {
        printf("The smallest digit in %d is %d", num, min_digit);
    }
    else
    {
        temp = num;
        while (temp > 0)
        {
            if (temp % 10 < min_digit)
            {
                min_digit = temp % 10;
            }
            temp /= 10;
        }
        printf("The smallest digit in %d is %d", num, min_digit);
    }

    getch();
}