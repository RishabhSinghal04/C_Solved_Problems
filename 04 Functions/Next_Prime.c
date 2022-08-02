/**
Write a program to input a number and check whether it is a prime number or not. 
If it is not a prime number then display the next number that is prime.

Sample Input : 14
Sample Output: 17
**/
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

typedef unsigned long ul;

bool isPrimeNumber(int);
ul nextPrimeNumber(int);

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrimeNumber(num))
    {
        printf("%d is a Prime Number", num);
    }
    else
    {
        printf("%d is not a Prime Number\n", num);
        printf("Next number which is Prime is ");
        printf("%d", nextPrimeNumber(num + 1));
    }

    getch();
}

bool isPrimeNumber(int num)
{
    bool flag = true;
    if (num == 0 || num == 1)
    {
        flag = false;
    }
    else
    {
        for (int i = 2; i * i <= num; ++i)
        {
            if (num % i == 0)
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

ul nextPrimeNumber(int num)
{
    for (int i = num; i <= num * 2; ++i)
    {
        if(isPrimeNumber(i))
        {
            return i;
        }
    }
}