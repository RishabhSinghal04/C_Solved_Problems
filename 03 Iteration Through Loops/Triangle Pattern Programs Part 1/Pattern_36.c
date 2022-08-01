/*
1
2 3 2
4 5 6 5 6
7 8 9 10 9 8 7
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,a=0;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i*2;j++)
        {
            if(j<=i)
                printf("%2d ",j+a);
            else
                printf("%2d ",(i*2)-j+a);
        }
        a+=i;
        printf("\n");
    }
    getch();
}