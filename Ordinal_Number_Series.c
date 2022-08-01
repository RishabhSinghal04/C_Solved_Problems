// 1st, 2nd, 3rd, 4th, 5th, .... , 21st, ......

#include <stdio.h>
#include <conio.h>

void main()
{
    char *str;
    unsigned int remainder;

    for (int i = 1; i < 100; ++i)
    {
        if (i >= 11 && i <= 20)
        {
            str = "th";
        }
        else
        {
            remainder = i % 10;

            switch (remainder)
            {
            case 1:
                str = "st";
                break;

            case 2:
                str = "nd";
                break;

            case 3:
                str = "rd";
                break;

            default:
                str = "th";
                break;
            }
        }
        printf("%u%s, ", i, str);
    }

    printf("100th");

    getch();
}