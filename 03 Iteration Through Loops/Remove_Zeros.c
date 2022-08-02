/**
Write a program to accept a number and display the new number after removing all zeros.

Sample Input: 5400207
Sample Output: 5427 
**/ 
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int num, temp, count = 0;
    float resultant_num = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("%d has only 0", num);
    }
    else
    {
        temp = num;
        while (temp > 0)
        {
            if (temp % 10 != 0)
            {
                resultant_num = pow(10.0, count) * (temp % 10) + resultant_num;
                count++;
            }
            temp /= 10;
        }
        printf("Resultant number after removing zeros from given number '%d' is %d", num, (int)resultant_num);
    }
    getch();
}