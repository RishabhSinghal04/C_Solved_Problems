
#include <stdio.h>
#include <conio.h>

void main()
{
    char choice;

    printf("Press 'A' to convert Upper Case into Lower Case\nPress 'a' to convert Lower Case into Upper Case\n");
    printf("Enter your choice: ");
    scanf("%c", &choice);

    switch (choice)
    {
    case 'A':
        printf("'%c' in Lower Case is '%c'", choice, choice + 32);
        break;

    case 'a':
        printf("'%c' in Upper Case is '%c'", choice, choice - 32);
        break;

    default:
        printf("----- I N V A L I D -----");
        break;
    }

    getch();
}