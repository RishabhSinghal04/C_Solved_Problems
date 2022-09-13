#include <stdio.h>
#include <conio.h>

unsigned long hcf;

unsigned long HCF(unsigned long, unsigned long);
unsigned long long LCM(unsigned long, unsigned long, unsigned long);

void main()
{
    unsigned long num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%lu %lu %lu", &num1, &num2, &num3);

    hcf = HCF(HCF(num1, num2), num3);

    printf("HCF or GCD of %lu, %lu and %lu is %lu\nLCM of %lu, %lu and %lu is %llu", num1, num2, num3, hcf, num1, num2, num3, LCM(num1, num2, num3));

    getch();
}

unsigned long HCF(unsigned long n1, unsigned long n2)
{
    if (n2 == 0)
    {
        return n1;
    }
    HCF(n2, n1 % n2);
}

unsigned long long LCM(unsigned long n1, unsigned long n2, unsigned long n3)
{
    return (n1 * n2 * n3) / hcf;
}