/*
1
A B 
1 2 3
C D E F
5 6 7 8 9
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,a=1,b=1;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==1)
                printf("%d ",a++);
            else
            {
                printf("%c ",b+64);
                b++;
            }
        }
        printf("\n");
    }
    getch();
}