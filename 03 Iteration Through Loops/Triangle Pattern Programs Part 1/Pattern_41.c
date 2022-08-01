/*
1#
2# 3#
4# 5# 6#
7# 8# 9# 10#
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,a=1;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%2d# ",a++);
        }
        printf("\n");
    }
    getch();
}