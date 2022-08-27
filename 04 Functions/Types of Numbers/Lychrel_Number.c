/**
Lychrel number is a natural number that cannot form a palindrome through the iterative process of repeatedly reversing its digits and adding the resulting numbers.
Examples : 196 -> reverse of 196 is 691 and 196 + 691 = 887(not palindrome) and so on.
56 -> 56 + 65 = 121(palindrome).
**/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

#define MAX_ITERATIONS 10

bool isLychrelNumber(unsigned int);
bool isPalindromeNumber(unsigned long long);

void main()
{
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    isLychrelNumber(num) ? printf("%u is a Lychrel Number", num) : printf("%u is not a Lychrel Number", num);

    getch();
}

bool isLychrelNumber(unsigned int num)
{
    unsigned long long reverse_num = 0, sum_num = num, temp = num;

    if (isPalindromeNumber(temp))
    {
        return false;
    }
    else
    {
        for (int i = 1; i <= MAX_ITERATIONS; ++i)
        {
            // Process to reverse an integer
            while (temp > 0)
            {
                reverse_num = reverse_num * 10 + (temp % 10);
                temp /= 10;
            }

            sum_num += reverse_num;

            if (isPalindromeNumber(sum_num))
            {
                return false;
            }
            
            temp = sum_num; 
        }
        return true;
    }
}

bool isPalindromeNumber(unsigned long long num)
{
    unsigned long long reverse_num = 0, temp = num;

    while (temp > 0)
    {
        reverse_num = reverse_num * 10 + (temp % 10);
        temp /= 10;
    }

    return (reverse_num == num) ? true : false;
}