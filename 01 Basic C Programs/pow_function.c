
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    unsigned long long num1, num2;

    printf("Enter 2 numbers: ");
    scanf("%llu %llu", &num1, &num2);

    printf("%llu ^ %llu is %llu\n", num1, num2, (unsigned long long)pow(num1, num2));

    getch();
}