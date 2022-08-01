/*
1
3 1
5 3 1
7 5 3 1
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
        a=(i*2)-1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a-=2;
        }
        printf("\n");
    }
    getch();
}