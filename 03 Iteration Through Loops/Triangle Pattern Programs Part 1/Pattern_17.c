/*
2
4 6
8 10 12
14 16 18 20
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n,a=2;
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