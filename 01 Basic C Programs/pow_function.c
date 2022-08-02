
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int num1, num2;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("%d ^ %d is %d\n", num1, num2, (int)pow(num1, num2)); // 10 ^ 2 = 24 or any other numbers
    
    // To resolve the issue
    printf("%d ^ %d is %d\n", num1, num2, (int)(pow(num1, num2) + 1e-9));

    getch();
}