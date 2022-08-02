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
    int n,a,s=1;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=s;
        for(int j=1;j<=i;j++)
        {
            printf("%2d ",a);
            a-=(n+j-i);
        }
        s+=n+1-i;
        printf("\n");
    }
    getch();
}

/*  //OR
    int n,a,b,s=1;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=5;i>=1;i--)
    {
        a=i;
        b=s;
        for(int j=5;j>=i;j--)
        {
            printf("%2d ",b);
            b-=a;
            a++;
        }
        s+=i;
        printf("\n");
    }
*/