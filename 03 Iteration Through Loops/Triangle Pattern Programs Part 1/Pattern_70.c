/*
           5
         9 4
      12 8 3
   14 11 7 2
15 13 10 6 1
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,x,y,t;
    printf("Enter row limit: ");
    scanf("%d",&n);
    x=n;
    for(int i=n;i>=1;i--)
    {
        t=x;
        y=i+1;
        for(int k=1;k<i;k++)
            printf("    ");
        for(int j=n;j>=i;j--)
        {
            printf("%3d ",t);
            t-=y;
            y++;
        }
        x+=i-1;
        printf("\n");
    }
    getch();
}