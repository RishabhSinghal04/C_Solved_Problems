// A program to perform basic arithematic operations on pointers.

#include <stdio.h>
#include <conio.h>

void choice(int, int);

long addition(int *, int *);
long subtraction(int *, int *);
long long product(int *, int *);
int division(int *, int *);

void main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    choice(num1, num2);

    getch();
}

void choice(int num1, int num2)
{
    _Bool exit = 1;
    do
    {
        char ch;

        printf(" Press '1' for addition\n Press '2' for subtraction\n Press '3' for multiplication\n Press '4' for division\n");
        printf(" Press '0' to exit\n");
        printf(" Enter your choice: ");
        scanf(" %c", &ch);

        switch (ch)
        {
        case '1':
            printf(" Addition of %d and %d is %ld\n", num1, num2, addition(&num1, &num2));
            break;

        case '2':
            printf(" Subtraction of %d and %d is %ld\n", num1, num2, subtraction(&num1, &num2));
            break;

        case '3':
            printf(" Multiplication of %d and %d is %lld\n", num1, num2, product(&num1, &num2));
            break;

        case '4':
            if (num1 < num2)
            {
                if (num1 == 0)
                {
                    printf("%c\n", 236); // ASCII code of infinity
                }
                else
                {
                    printf(" Division of %d and %d is %d\n", num1, num2, division(&num1, &num2));
                }
            }
            else
            {
                if (num2 == 0)
                {
                    printf("%c\n", 236);
                }
                else
                {
                    printf(" Division of %d and %d is %d\n", num2, num1, division(&num2, &num1));
                }
            }
            break;

        case '0':
            exit = 0;
            printf("Exit");
            break;

        default:
            printf(" INVALID CHOICE");
            break;
        }
    } while (exit == 1);
}

long addition(int *num1, int *num2)
{
    return *num1 + *num2;
}

long subtraction(int *num1, int *num2)
{
    return (*num1 > *num2) ? *num1 - *num2 : *num2 - *num1;
}

long long product(int *num1, int *num2)
{
    return *num1 * *num2;
}

int division(int *num1, int *num2)
{
    return *num1 / *num2;
}