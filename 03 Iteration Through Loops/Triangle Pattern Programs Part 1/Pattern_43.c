/*
 1 #
 3 # 2
 4 # 5 # 6
10 # 9 # 8 # 7
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,a=1,b;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        b=a+i;
        for(int j=1;j<=i;j++)
        {
            if(i%2==1)
                printf("%2d ",a+j-1);
            else
                printf("%2d ",b-j);
            if(j!=i)
                printf("# ");
        }
        a+=i;
        printf("\n");
    }
    getch();
}