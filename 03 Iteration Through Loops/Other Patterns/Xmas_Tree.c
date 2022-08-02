#include <stdio.h>
#include <conio.h>

void main()
{
    int height, width, space, a=1; //used to print X'mas Tree

    printf("Enter number of rows: ");
    scanf("%d",&height);
    printf("Enter number of coloumns: ");
    scanf("%d",&width);

    space=width*5;  // space from the left corner

    // Tree's upper part : leaves
    for(int l=1;l<=height;l++)
    {
        for(int i=a;i<=width;i++)
        {
            for(int j=space;j>=i;j--)
                printf(" ");

            for(int k=1;k<=i;k++)
                printf("* ");

            printf("\n");
        }
        a+=2;
        width+=2;
    }

    // Tree's lower part : stem
    for(int i=1;i<=4;i++)
    {
        for(int j=space-3;j>=1;j--)
            printf(" ");
        
        for(int k=1;k<=4;k++)
            printf("* ");
        
        printf("\n");
    }
    getch();
}