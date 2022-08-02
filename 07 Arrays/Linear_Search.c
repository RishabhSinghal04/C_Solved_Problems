#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

#define N 10    // define length of array

bool isNumberFound(int, int*);

void main()
{
    int num[N], search_num;

    printf("Enter ten(10) numbers: \n");
    for(int i=0;i<N;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&num[i]);
    }

    printf("Enter a number to be searched: ");
    scanf("%d",&search_num);

    // Ternary Operator
    isNumberFound(search_num, num)?
        printf("Search number found"):
        printf("Search number not found");

    getch();
}

bool isNumberFound(int search_num, int num[N])
{
    // Linear Search Process
    for(int i=0;i<N;i++)
    {
        if(num[i]==search_num)
            return true;
    }
    return false;
}