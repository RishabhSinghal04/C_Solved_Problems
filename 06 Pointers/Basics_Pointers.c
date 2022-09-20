
#include <stdio.h>
#include <conio.h>

void main()
{
    int a = 10, *ptr = &a; // '&' address of operator
    float b = 10.5, *fptr = &b;

    printf("Address of variable 'a' is %p\n", ptr);
    printf("Value of variable 'a' is %d\n", *ptr); // '*' Value Of operator, Indirection OR Dereference operator

    printf("Address of variable 'b' is %p\n", fptr);
    printf("Value of variable 'b' is %f\n", *fptr);

    printf("Enter two numbers: ");
    scanf("%d %f", &a, &b);

    printf("Address of variable 'a' is %p\n", ptr);
    printf("Value of variable 'a' is %d\n", *ptr); // Print the modified value

    printf("Address of variable 'b' is %p\n", fptr);
    printf("Value of variable 'b' is %f\n", *fptr); // Print the modified value

    getch();
}