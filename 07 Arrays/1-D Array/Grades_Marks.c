// A program to display grades obtained by 25 students according to their average marks

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define N 25

void initializeArrayElements(unsigned short *);
void displayArrayElements(unsigned short *, unsigned char *);
void Grades(unsigned short *, unsigned char *);

void main()
{
    unsigned char grades[N];
    unsigned short marks[N];

    initializeArrayElements(marks);
    Grades(marks, grades);

    printf("Average marks of students are as follows:-\n");
    printf("    Roll Number      Average Marks      Grade\n");
    displayArrayElements(marks, grades);

    getch();
}

void initializeArrayElements(unsigned short array[])
{
    srand(time(NULL));

    for (short i = 0; i < N; ++i)
    {
        array[i] = rand() % 101;
    }
}

void Grades(unsigned short marks[], unsigned char grades[])
{
    for (short i = 0; i < N; ++i)
    {
        if (marks[i] >= 85)
        {
            grades[i] = 'A';
        }
        else if (marks[i] >= 65)
        {
            grades[i] = 'B';
        }
        else if (marks[i] >= 40)
        {
            grades[i] = 'C';
        }
        else
        {
            grades[i] = 'D';
        }
    }
}

void displayArrayElements(unsigned short marks[], unsigned char grades[])
{
    for (short i = 0; i < N; ++i)
    {
        printf("\t%2hd \t\t %3hu \t\t %c\n", i + 1, marks[i], grades[i]);
    }
}