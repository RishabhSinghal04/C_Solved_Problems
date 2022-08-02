/*
15 14 13 12 11
10  9  8  7
 6  5  4
 3  2
 1
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,n;
    printf("Enter row limt: ");
    scanf("%d",&n);
    a=(n*(n+1))/2;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
            printf("%d ",a--);
        printf("\n");
    }
    getch();
}