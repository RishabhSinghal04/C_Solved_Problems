//  50,45,40,35,30,25,20,15,10,5.
#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    printf("Enter series limit: ");
    printf("50");
    for(i=45;i>=1;i-=5)
    {
        printf(" , %d",i);
    }
    getch();
}