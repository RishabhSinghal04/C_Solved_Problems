/*
A A A A A
B B B B
C C C
D D
E
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter row limt: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
            printf("%c ",i+64);
        printf("\n");
    }
    getch();
}