#include <stdio.h>
#include <conio.h>

void NaturalNumbers(int);

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("All natural numbers (N) from 1 to %d are ",num);
    NaturalNumbers(num);
    getch();
}

void NaturalNumbers(int nn)
{
    if(nn<=0)
        return;
    else
        NaturalNumbers(nn-1);
    printf("%d ",nn);
}