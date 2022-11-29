// A program to store inforamation of n students using structure

#include <stdio.h>
#include <conio.h>

struct student
{
    char name[100];
    unsigned short semester, age;
    unsigned int roll_num;
};

void inputInformation(struct student *, unsigned short);
void displayInformation(struct student *, unsigned short);

void main()
{
    unsigned short n;

    printf("Enter number of students: ");
    scanf("%hu", &n);
    struct student stdntDetails[n];

    inputInformation(stdntDetails, n);

    printf("----- Student Details ------\n");
    displayInformation(stdntDetails, n);

    getch();
}

void inputInformation(struct student *stdntDetails, unsigned short n)
{
    for (unsigned int i = 0; i < n; ++i)
    {
        printf("\n");
        printf("Name : ");
        scanf(" %[^\n]s", stdntDetails[i].name);

        printf("Roll Number : ");
        scanf("%u", &stdntDetails[i].roll_num);

        printf("Age : ");
        scanf("%hu", &stdntDetails[i].age);

        printf("Semester : ");
        scanf("%hu", &stdntDetails[i].semester);
    }
}

void displayInformation(struct student *stdntDetails, unsigned short n)
{
    for (unsigned short i = 0; i < n; ++i)
    {
        printf("\nStudent %hu\n", i + 1);
        puts(stdntDetails[i].name);
        printf("Roll Number : %hu\n", stdntDetails[i].roll_num);
        printf("Age : %huyears\n", stdntDetails[i].age);
        printf("Semester : %hu\n", stdntDetails[i].semester);
    }
}