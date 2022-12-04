/*
Define a structure data type named date containing three integer members day, month and year.
Develop an interactive modular program to perform the following tasks:-
    • To read data into structure members by a function.
    • To validate the date entered by another function.
    • To print the date in the format
             April 29, 2002
             by a third function.
The input data should be three integers like 29, 4, and 2002 corresponding to day, month and year.
Examples of invalid date:-
31/4/2002 - April has only 30 days
29/2/2002 - 2002 is not a leap year
*/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

struct date
{
    unsigned int day, month, year;
};

void inputDate(struct date *);
bool checkDate(struct date *);
void displayDate(struct date *);

void main()
{
    struct date Date;

    inputDate(&Date);

    if (checkDate(&Date))
    {
        displayDate(&Date);
    }
    else
    {
        printf("INVALID DATE");
    }
    getch();
}

void inputDate(struct date *Date)
{
    printf("DATE:-\n");
    printf("Day: ");
    scanf("%u", &Date->day);

    printf("Month Number: ");
    scanf("%u", &Date->month);

    printf("Year: ");
    scanf("%u", &Date->year);
    // printf("%u %u %u\n",Date.day, Date.month, Date.year);
}

bool checkDate(struct date *Date)
{
    if (Date->year < 1)
    {
        return false;
    }
    else if (Date->month > 0 && Date->month <= 7) // First seven months
    {
        if (Date->month % 2 == 1) // January, March, May and July
        {
            return (Date->day > 0 && Date->day < 32) ? true : false;
        }
        else // February, April and June
        {
            if (Date->month == 2) // Month is February
            {
                if (Date->day == 29) // Check for leap year
                {
                    if (Date->year % 100 == 0)
                    {
                        return (Date->year % 400 == 0) ? true : false;
                    }
                    return (Date->year % 4 == 0) ? true : false;
                }
                return (Date->day > 0 && Date->day < 29) ? true : false;
            }
            return (Date->day > 0 && Date->day < 31) ? true : false;
        }
    }
    else if (Date->month > 7 && Date->month <= 12) // Last five months
    {
        if (Date->month % 2 == 0) // August, October and December
        {
            return (Date->day > 0 && Date->day < 32) ? true : false;
        }
        else // September and November
        {
            return (Date->day > 0 && Date->day < 31) ? true : false;
        }
    }
    return false;
}

void displayDate(struct date *Date)
{
    char *nameMonths[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("%s %u, %u", nameMonths[Date->month - 1], Date->day, Date->year);
}