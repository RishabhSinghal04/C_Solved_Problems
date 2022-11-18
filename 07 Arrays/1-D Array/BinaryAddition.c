/*
A program to add two binary numbers
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    unsigned short num, num2, temp, temp2, index = 0, remainder = 0;
    int *sum = (int *)calloc(index, sizeof(int));

    printf("Enter two binary numbers: ");
    scanf("%hu %hu", &num, &num2);

    temp = num;
    temp2 = num2;

    while (temp > 0 || temp2 > 0)
    {
        sum[index++] = (temp % 10 + temp2 % 10 + remainder) % 2;
        remainder = (temp % 10 + temp2 % 10 + remainder) / 2;
        temp /= 10;
        temp2 /= 10;
    }

    if (remainder == 1)
    {
        sum[index++] = 1;
    }
    --index;

    printf("Sum of %hu and %hu is ", num, num2);
    while (index >= 0)
    {
        printf("%u", sum[index--]);
    }

    getch();
}