/*
1
1 3
1 3 5
1 3 5 7
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
            a+=2;
        }
        printf("\n");
    }
    getch();
}