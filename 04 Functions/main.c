#include <stdio.h>
#include <conio.h>
#include "Numbers\NumberEqualToSumOfTwoPrimeNumbers.c"

long long add(long long, long long);

void main()
{
    long long num;
    printf("Enter a number: ");
    scanf("%lld",&num);
    printf("%lld can be expressed as the sum of following prime numbers:-\n",num);
    NumberEqualToSumOfTwoPrimeNumbers(num);
    printf("That's It !");
    getch();
}