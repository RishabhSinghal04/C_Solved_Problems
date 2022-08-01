
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    unsigned short player_score = 0, comp_score = 0, player_choice, comp_choice;

    printf("Enter '1' for Stone '2' for Paper '3' for Scissor");

    srand(time(NULL));

    printf("\n\n \t\t\t  Player Choice  Computer Choice    Player Point  Computer Point    Player Score  Computer Score");

    while (player_score < 5 && comp_score < 5)
    {
        unsigned short player_point = 0, comp_point = 0;

        printf("\n\nEnter your choice: ");
        scanf("%u", &player_choice);

        comp_choice = (rand() % (3) + 1);

        switch (player_choice)
        {
        case 1: // Choice is stone

            printf("\n \t \t \t      Stone"); // Hexa Space

            switch (comp_choice) // Computer's Choice
            {
            case 1: // Choice is stone

                printf(" \t \t Stone");
                break;

            case 2: // Choice is paper

                printf(" \t \t Paper");
                comp_point = 1;
                break;

            case 3: // Choice is scissor

                printf("\t       Scissor"); // Septa Space
                player_point = 1;
                break;
            }
            break;

        case 2: // Choice is paper

            printf("\n \t \t \t      Paper"); // Hexa Space

            switch (comp_choice) // Computer's Choice
            {
            case 1: // Choice is stone

                printf(" \t \t Stone");
                player_point = 1;
                break;

            case 2: // Choice is paper

                printf(" \t \t Paper");
                break;

            case 3: // Choice is scissor

                printf("\t       Scissor"); // Octa Space
                comp_point = 1;
                break;
            }
            break;

        case 3: // Choice is scissor

            printf("\n \t \t \t    Scissor"); // Quad Space

            switch (comp_choice) // Computer's Choice
            {
            case 1: // Choice is stone

                printf("\t\t Stone");
                comp_point = 1;
                break;

            case 2: // Choice is paper

                printf("\t\t Paper");
                player_point = 1;
                break;

            case 3: // Choice is scissor

                printf("\t       Scissor"); // Octa Space
                break;
            }
            break;

        default:

            printf("\t\t\t ---- INVALID INPUT ----");
            break;
        }
        player_score += player_point;
        comp_score += comp_point;

        printf(" \t \t %hu \t \t %hu \t \t %hu \t \t %hu", player_point, comp_point, player_score, comp_score);
    }

    (player_score > comp_score) ? printf("\n\n ***** Player Wins *****") : printf("\n\n ***** Computer Wins *****");

    printf("\n Player Score: %u", player_score);
    printf("\n Computer Score: %u", comp_score);

    getch();
}