//  x^2 + x^6 + x^10 + ......... x^n.
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int x, n, term=2;
    double sum_series=0.0;

    printf("Enter series limit: ");
    scanf("%d",&n);

    printf("Enter value of 'x' : ");
    scanf("%d",&x);

    sum_series+=pow(x,term);
    printf("%d^%d",x,term);

    for(int i=2;i<=n;i++)
    {
        term+=4;
        sum_series+=pow(x,term);
        printf(" + %d^%d",x,term);
    }
    printf(" = %lf",sum_series);
    getch();
}