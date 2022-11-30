
#include <stdio.h>
#include <conio.h>

// A structure to group different type of data into a single type. "employee is structure tag"
struct employee
{
    unsigned short age;
    char *uniqueID;
    float salary;
};

void main()
{
    struct employee emp1, emp2; // Structre variables

    // Accessing members of structure
    emp1.age = 28;
    emp2.age = 30;

    emp1.uniqueID = "10acdv5678";
    emp2.uniqueID = "11acdy5474";

    emp1.salary = 40000.0;
    emp2.salary = 50000.0;

    // Display employee details
    printf("Employee 1:-\n");
    printf("Age: %hu\t Unique ID: %s \t Salary: %.2f\n", emp1.age, emp1.uniqueID, emp1.salary);

    printf("\nEmployee 2:-\n");
    printf("Age: %hu\t Unique ID: %s \t Salary: %.2f\n", emp2.age, emp2.uniqueID, emp2.salary);

    getch();
}