
#include <stdio.h>
#include <conio.h>

typedef unsigned long long ull;

ull GCD(ull, ull);

void main()
{
    ull num1, num2, gcd_num = 0;

    printf("Enter two(2) numbers: ");
    scanf("%llu %llu", &num1, &num2);

    if (num1 == num2)
    {
        gcd_num = num1; // or gcd_num = num2;
    }

    else if (num1 < num2)
    {
        gcd_num = GCD(num1, num2);
        printf("\n\t %llu\n", gcd_num);
    }

    else
    {
        gcd_num = GCD(num2, num1);
        printf("\n\t %llu\n", gcd_num);
    }

    printf("Greatest Common Divisor of %llu and %llu is %llu", num1, num2, gcd_num);

    getch();
}

ull GCD(ull small_num, ull large_num)
{
    ull remainder = large_num % small_num;
    while (remainder != 0)
    {
        large_num = small_num;
        small_num = remainder;
        remainder = large_num % small_num;
    }
    return small_num;
}