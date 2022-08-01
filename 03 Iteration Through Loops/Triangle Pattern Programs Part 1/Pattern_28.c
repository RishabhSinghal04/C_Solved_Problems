/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
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
        a=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a=(a*(i-j))/j;
        }
        printf("\n");
    }
    getch();
}