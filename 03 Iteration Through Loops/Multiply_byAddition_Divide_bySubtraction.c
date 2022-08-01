/**
You can multiply two numbers 'm' and 'n' by having repeated addition of 'm' for 'n' number of times.

For example, 5 * 3 = 15, can be performed by adding 5 three times => 5 + 5 + 5 = 15. 
Similarly, successive subtraction of two numbers produces 'Quotient' and 'Remainder' when two numbers 'a' is divided by 'b' (a>b).

For example, 5/2 = Quotient = 2 and Remainder =1 Follow the steps shown below:

Process	Result	Counter
  5 - 2	   3	   1
  3 - 2	   1	   2
    
Sample Output: The last counter value represents 'Quotient' => 2
	          The last result value represents 'Remainder' => 1

Write a program to accept two numbers. Perform multiplication and division of the numbers as per the process shown above by using switch case statement.
**/
#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, choice_num, small_num, large_num, count = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf(" '1' for Multiplication(x) and '2' for Division(/) of %d and %d\n", num1, num2);
    printf("Enter your choice: ");
    scanf("%d", &choice_num);

    small_num = (num1 < num2) ? num1 : num2;
    large_num = num1 + num2 - small_num;

    switch (choice_num)
    {
    case 1:

        // Multiplication by repeated addition
        for (int i = 1; i < small_num; ++i)
        {
            large_num += ((num1 > num2) ? num1 : num2);
        }

        printf("\nProduct of %d and %d is %d",num1, num2, large_num);
        break;

    case 2:
        
        printf("\nDivision of %d and %d\n", num1, num2);
        // Division by successive subtraction
        while(large_num>small_num)
        {
            large_num -= small_num;     // large_num => reaminder
            count++;    //count => quotient
        }

        printf("\nQuotient is %d \nRemainder is %d", count, large_num);
        break;

    default:
        printf("\n-------I N V A L I D------\n");
        break;
    }

    getch();
}