#include <stdio.h>
#include <conio.h>
#include <math.h>

double HyperFactorial(int);
void main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);

    printf(" Hyperfactorial of %d is %lf", num, HyperFactorial(num));
    getch();
}

double HyperFactorial(int num)
{
    double factorial=1.0;
    for(int i=1;i<=num;i++)
        factorial*=pow(i,i);
    return factorial;
}
