/*
A
A B
A B C
A B C D
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        ch='A';
        for(int j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
            ch=(ch>'Z')?'A':ch;
        }
        printf("\n");
    }
    getch();
}