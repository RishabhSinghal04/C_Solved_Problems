/*
 1
 3 * 2
 4 * 5 * 6
10 * 9 * 8 * 7
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,a=1,b=1,c;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        c=b;
        for(int j=1;j<=i;j++)
        {
            if(i%2==1)
                printf("%2d ",a);
            else
                printf("%2d ",c);
            c--;
            a++;
            if(j!=i)
                printf("* ");
        }
        b+=i+1;
        printf("\n");
    }
    getch();
}