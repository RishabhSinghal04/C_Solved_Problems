/**
Write a program to input a number. Display the product of the successors of even digits of the number entered by user.
Input: 2745
The even digits are: 2 and 4
The product of successor of even digits is: 3*5= 15 Output: 15 
**/
#include <stdio.h>
#include <conio.h>

void main()
{
    int num, product = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        if ((temp % 10) % 2 == 0)
        {
            product *= (temp % 10 + 1);
        }
        temp /= 10;
    }

    printf("Product of successors of even digits of %d is %d", num, product);

    getch();
}