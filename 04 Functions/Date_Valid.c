#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

int date, temp_date, day_num, month, year;

bool isDayNumValid(int);
bool isMonthValid(int);
bool isYearValid(int);
bool isLeapYear(int);

void main()
{
    printf("Enter a date in 'DDMMYYYY' format: ");
    scanf("%d", &date);

    temp_date = date;
    int date_len = 1 + (int)log10(date);

    year = temp_date % 10000;
    temp_date /= 10000;

    month = temp_date % 100;
    day_num = temp_date / 100;

    if ((date_len == 7 || date_len == 8) && isMonthValid(month) && isDayNumValid(day_num) && isYearValid(year))
        printf("%d is a valid date ", date);
    else
        printf("%d is not a valid date", date);
    getch();
}

bool isDayNumValid(int d)
{
    if (d < 1 && d > 31)
    {
        return false;
    }

    // If month is February
    if (month == 2 && isLeapYear(year))
    {
        if (d > 29)
            return false;
        else
            return true;
    }
    else if (month == 2)
    {
        if (d > 28)
            return false;
        else
            return true;
    }
    else
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            if (d > 31)
                return false;
            else
                return true;
        }
        else
        {
            if (d > 30)
                return false;
            else
                return true;
        }
    }
}

bool isMonthValid(int m)
{
    if (m >= 1 && m <= 12)
        return true;
    else
        return false;
}

bool isYearValid(int y)
{
    if (y >= 1 && y <= 9999)
        return true;
    else
        return false;
}

bool isLeapYear(int ly)
{
    if (ly % 100 == 0 && ly % 400 == 0)
        return true;
    else if (ly % 4 == 0)
        return true;
    else
        return false;
}