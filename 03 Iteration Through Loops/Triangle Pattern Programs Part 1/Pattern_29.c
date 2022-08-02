/*
1
1 2
2 3 4
4 5 6 7
7 8 9 10 11
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,a=2;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a-i);
            a++;
        }
        printf("\n");
    }
    getch();
}