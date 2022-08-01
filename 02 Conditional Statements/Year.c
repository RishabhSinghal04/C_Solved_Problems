
#include <stdio.h>
#include <conio.h>

void main()
{
    unsigned int year_num;

    printf("Enter a year number: ");
    scanf("%u", &year_num);

    if (year_num % 400 == 0)
    {
        printf("%u is a Century Leap Year", year_num);
    }
    else if (year_num % 100 == 0)
    {
        printf("%u is a Century Year", year_num);
    }
    else if (year_num % 4 == 0)
    {
        printf("%u is a Leap Year", year_num);
    }
    else
    {
        printf("%u is a Common Year", year_num);
    }

    getch();
}