/* Program to generate 'Sanke and Ladder' like pattern */

#include <stdio.h>
#include <conio.h>

void main()
{
    int k;
    for(int i=10;i>0;i--)   // for rows
    {
        if(i%2==0)  // even rows
        {
            k=i*10;
            for(int j=10;j>0;j--)   // for coloumns
            {
                printf("%3d ",k);
                k--;
            }
        }
        else    // odd rows
        {
            k=(i-1)*10;
            for(int j=10;j>0;j--)   // for coloumns
            {
                k++;
                printf("%3d ",k);
            }
        }
        printf("\n");   // next row
    }
    getch();
}