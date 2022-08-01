/*
        A
      A B
    A B C
  A B C D
A B C D E
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    char ch;
    printf("Enter row limit: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        ch='A';
        for(int k=i;k<n;k++)
            printf("  ");
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