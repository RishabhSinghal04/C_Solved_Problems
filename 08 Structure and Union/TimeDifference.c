//

#include <stdio.h>
#include <conio.h>

struct timeDiff
{
    unsigned short hour, minute, second;
};

void TimeDifference(struct timeDiff, struct timeDiff, struct timeDiff *);

void main()
{
    struct timeDiff start, stop, diff;

    printf("Start Time\n");
    printf("Enter Hours: ");
    scanf("%hu", &start.hour);
    printf("Enter Minutes: ");
    scanf("%hu", &start.minute);
    printf("Enter Second: ");
    scanf("%hu", &start.second);

    printf("Stop Time\n");
    printf("Enter Hours: ");
    scanf("%hu", &stop.hour);
    printf("Enter Minutes: ");
    scanf("%hu", &stop.minute);
    printf("Enter Second: ");
    scanf("%hu", &stop.second);

    TimeDifference(start, stop, &diff);

    printf("Difference in time is:-\n");
    printf("%hu : %hu : %hu - %hu : %hu : %hu = ", start.hour, start.minute, start.second, stop.hour, stop.minute, stop.second);
    printf("%hu : %hu : %hu", diff.hour, diff.minute, diff.second);

    getch();
}

void TimeDifference(struct timeDiff start, struct timeDiff stop, struct timeDiff *diff)
{
    while (stop.second > start.second)
    {
        start.minute--;
        start.second += 60;
    }
    while (stop.minute > start.minute)
    {
        start.hour--;
        start.minute += 60;
    }

    diff->second = start.second - stop.second;
    diff->minute = start.minute - stop.minute;
    diff->hour = start.hour - stop.hour;
}