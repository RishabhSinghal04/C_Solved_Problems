//  (x^1)/2! + (x^3)/4! + (x^5)/6! ....... (x^n)/(n+1)!
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int n, x, term=3, factorial=1;
    float sum_series=0.0;
    printf("Enter series limit: ");
    scanf("%d",&n);

    printf("Enter value of 'x' : ");
    scanf("%d",&x);

    sum_series+=x/2;
    printf("(%d^1)/2!",x);

    for(int i=2;i<=n;i++)
    {
        factorial=1;
        for(int j=1;j<=term+1;j++)
            factorial*=j;
        sum_series+=pow(x,term)/factorial;
        printf(" + (%d^%d)/%d!",x,term,term+1);
        term+=2;
    }
    printf(" = %f",sum_series);
    getch();
}