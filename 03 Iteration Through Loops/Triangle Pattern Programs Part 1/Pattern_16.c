/*
1
3 5
7 9 11
13 15 17 19
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,a=1;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d \t",a);
            a+=2;
        }
        printf("\n");
    }
    getch();
}