#include <stdio.h>
#include <conio.h>

void recurse(int n)
{
    if(n<1)
        return;
    else
    {
        printf("%d ",n);
        recurse(n-1);
        printf("%d ",n);
    }
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    recurse(num);
    getch();
}