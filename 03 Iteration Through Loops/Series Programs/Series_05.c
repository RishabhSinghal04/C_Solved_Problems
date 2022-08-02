//  1! + 2! + 3! + 4! + 5! + 6! + 7!..........n!.
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, factirial=1;
    long long sum_series=1;
    printf("Enter series limit: ");
    scanf("%d",&n);

    printf("1!");

    for(int i=2;i<=n;i++)
    {
        factirial=1;
        for(int j=1;j<=i;j++)
            factirial*=j;
        sum_series+=factirial;
        printf(" + %d!",i);
    }
    printf(" = %llu",sum_series);
    getch();
}