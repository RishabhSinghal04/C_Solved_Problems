
#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, *ptr_num1, *ptr_num2;
    long sum_num = 0l;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    ptr_num1 = &num1;
    ptr_num2 = &num2;
    sum_num = *ptr_num1 + *ptr_num2;

    printf("Sum of %d and %d is %ld", num1, num2, sum_num);

    getch();
}