/*
1
6 2 
10 7 3
13 11 8 4
15 14 12 9 5
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,a,sum=1;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=sum;
        for(int j=1;j<=i;j++)
        {
            printf("%d \t",a);
            a-=(n+j-i);
        }
        printf("\n");
        sum+=(1+n-i);
    }
    getch();
}