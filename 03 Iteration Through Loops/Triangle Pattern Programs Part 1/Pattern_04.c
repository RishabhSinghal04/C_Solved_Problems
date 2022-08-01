/*
A
B B
C C C
D D D D
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    char ch='A';
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c ",ch);
        }
        printf("\n");
        if(ch>='Z')
            ch='A';
        else
            ch++;
    }
    getch();
}