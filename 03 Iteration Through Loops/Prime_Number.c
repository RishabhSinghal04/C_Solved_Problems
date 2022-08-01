#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned long long num;
    unsigned short int result = 1;

    printf("Enter a number: ");
    scanf("%llu", &num);

    if (num <= 1) // 1 and 0 are not Prime Numbers
    {
        result = 0;
    }
    else if (num < 4) // 2 and 3 are Prime Numbers
    {
        result = 1;
    }
    else if (num % 2 == 0 || num % 3 == 0) // All even numbers (except 2) and multiples of 3
    {
        result = 0;
    }
    else
    {
        for (int i = 5; i * i <= num; i += 6)   
        {   // 35 and 37 to 41 (i += 6) --> 41 and 43 to 47 --> 47 and 49 to 53 --> 53 and 55 to 59 --> 59 and 61 to 65
            if (num % i == 0 || num % (i + 2) == 0)
            {
                result = 0;
            }
        }
    }

    (result == 1) ? printf("%llu is a Prime Number", num) : printf("%llu is not a Prime Number", num);

    getch();
}