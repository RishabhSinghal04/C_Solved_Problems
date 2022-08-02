/*
5 9 12 14 15
4 8 11 13
3 7 10
2 6
1
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,n;
    printf("Enter row limt: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        a=i;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a+=n-j;
        }
        printf("\n");
    }
    getch();
}