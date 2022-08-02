#include <stdio.h>
#include <conio.h>

long hcf;

long HCF(long, long);
long long LCM(long, long);

void main()
{
    long num1, num2;
    printf("Enter two(2) numbers: ");
    scanf("%lu %lu",&num1, &num2);
    hcf=HCF(num1, num2);
    printf("HCF or GCD of %lu and %lu is %lu \n LCM of %lu and %lu is %lld",\
            num1, num2, hcf, num1, num2, LCM(num1, num2));
    getch();
}

long HCF(long n1, long n2)
{
    if(n2==0)
        return n1;
    HCF(n2, n1%n2);
}

long long LCM(long n1, long n2)
{
    return (n1*n2)/hcf;
}