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
    int n,t,x=1,y;
    printf("Enter row limit: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        y=i;
        t=x;
        for(int k=1;k<i;k++)
            printf("   ");
        for(int j=n;j>=i;j--)
        {
            printf("%2d ",t);
            t-=y;
            y++;
        }
        x+=i;
        printf("\n");
    }
    getch();
}