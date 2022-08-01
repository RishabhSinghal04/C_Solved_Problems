
#include <stdio.h>
#include <conio.h>

void main()
{
    char choice;
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("'+' for Addition\n'-' for Subtraction\n'*' for Multiplication\n'/' for Division\n");
    printf("Enter your choice: ");
    scanf("\n%c", &choice);

    switch (choice)
    {
    case '+':
        printf("Result of %f + %f is %f", num1, num2, num1 + num2);
        break;

    case '-':
        (num1 > num2) ? printf("Result of %f - %f is %f", num1, num2, num1 - num2) : printf("Result of %f - %f is %f", num2, num1, num2 - num1);
        break;

    case '*':
        printf("Result of %f X %f is %f", num1, num2, num1 * num2);
        break;

    case '/':
        (num2 == 0) ? printf("%c", 236) : printf("Result of %f / %f is %f", num1, num2, num1 / num2);
        break;

    default:
        printf("I N V A L I D");
        break;
    }

    getch();
}