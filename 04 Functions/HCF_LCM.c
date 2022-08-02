#include <stdio.h>
#include <conio.h>

typedef unsigned long ul;

ul hcf;

ul HCF(ul, ul);
unsigned long long LCM(ul, ul);

void main()
{
    ul num1, num2;
    printf(" Enter two(2) numbers: ");
    scanf("%lu %lu",&num1, &num2);
    hcf=HCF(num1, num2);
    printf(" HCF or GCD of %lu and %lu is %lu \n LCM of %lu and %lu is %llu",num1, num2, hcf, num1, num2, LCM(num1, num2));
    getch();
}

ul HCF(ul num1, ul num2)
{
    int remainder;
    while(num2>0)
    {
        remainder=num1%num2;
        num1=num2;
        num2=remainder;
    }
    return num1;
}

unsigned long long LCM(ul num1, ul num2)
{
    return  (num1*num2)/hcf;
} 