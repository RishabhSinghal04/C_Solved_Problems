// A program to store inforamation of a student using structure

#include <stdio.h>
#include <conio.h>

struct student
{
    char name[100], course[20];
    unsigned short semester, age;
    unsigned long roll_num;
};

void main()
{
    struct student stdntDetails;

    printf("Student Details");

    printf("\n Name : ");
    scanf("%[^\n]s", stdntDetails.name);

    printf("\n Course : ");
    scanf(" %[^\n]s", stdntDetails.course);

    printf("\n Age : ");
    scanf("%hu", &stdntDetails.age);

    printf("\n Semester : ");
    scanf("%hu", &stdntDetails.semester);

    printf("\n Roll Number : ");
    scanf("%lu", &stdntDetails.roll_num);

    printf("\nName : %s \t Age : %huyears \t Roll Number : %u ", stdntDetails.name, stdntDetails.age, stdntDetails.roll_num);
    printf("\nCourse : %s \t Semester : %hu", stdntDetails.course, stdntDetails.semester);

    getch();
}