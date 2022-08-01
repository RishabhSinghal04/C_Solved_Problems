/*
5 4 3 2 1
6 5 4 3
7 6 5
8 7
9
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,n;
    printf("Enter row limt: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=n+i-1;
        for(int j=i;j<=n;j++)
        {
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }
    getch();
}