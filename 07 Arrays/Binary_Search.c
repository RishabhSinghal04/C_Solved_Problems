#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define N 20

bool isNumberFound(int *, int *);
void printArray(int *);
void InsetionSort(int num[N])
{
    int j, key;
    for(int i=1;i<N;i++)
    {
        key=num[i];
        j=i-1;
        while(j>=0 && key<num[j])
        {
            num[j+1]=num[j];
            j-=1;
        }
        num[j+1]=key;
    }
}

void main()
{
    int min=-1000, max=1000, num[N], search_num;
    srand(time(NULL));

    for(int i=0;i<N;i++)
        num[i]=(rand()%(max-min+1))+min;

    InsetionSort(num);  // Calling this function to sort the array for binary search
    printArray(num);    // Calling display function

    printf("\nEnter a number to be searched: ");
    scanf("%d",&search_num);

    if(isNumberFound(num, &search_num))
        printf("Search Number Found");
    else
        printf("Search Number NOT Found");

    getch();
}

void printArray(int num[N])
{   // Display array of random generated numbers
    printf("[ %d",num[0]);
    for(int i=1;i<N;i++)
        printf(", %d",num[i]);
    printf("]");
}

bool isNumberFound(int num[N], int *search_num)
{   //Binary Search Process
    int min=0, max=N-1;
    int mid,c=0;
    while(min<max)
    {
        mid=(max+min)/2;c++;printf("%d\n",c);
        if(num[mid]==*search_num)
            return true;
        else if(num[min]==*search_num)
            return true;
        else if(num[max]==*search_num)
            return true;
        else if(*search_num<num[mid])
            max=mid-1;
        else
            min=mid+1;
    }
    return false;
}