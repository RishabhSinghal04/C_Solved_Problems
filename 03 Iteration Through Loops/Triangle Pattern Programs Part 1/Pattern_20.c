/*
1
9 2 
10 8 3
14 11 7 4
15 13 12 6 5
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,x=1,y,t1,t2,r1,r2;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    y=n;
    for(int i=n;i>0;i--)
    {
        t1=x;
        t2=y;
        r1=i;
        r2=i+1;
        for(int j=n;j>=i;j--)
        {
            if((i+j)%2==0)
                printf("%d \t",t1);
            else
                printf("%d \t",t2);
            t1-=r1++;
            t2-=r2++;
        }
        printf("\n");
        y+=i-1;
        x+=i;
    }
    getch();
}