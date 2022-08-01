/*
A
1 2
A B C
1 2 3 4
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==1)
                printf("%c ",j+64);
            else
                printf("%d ",j);
        }
        printf("\n");
    }
    getch();
}