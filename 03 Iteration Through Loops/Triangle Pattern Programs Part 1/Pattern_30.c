/*
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,a;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=i;
        for(int j=1;j<=i;j++)
        {
            printf("%2d ",a);
            a+=(n-j);
        }
        printf("\n");
    }
    getch();
}