/*
5 6 7 8 9
4 5 6 7
3 4 5
2 3
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
            a++;
        }
        printf("\n");
    }
    getch();
}