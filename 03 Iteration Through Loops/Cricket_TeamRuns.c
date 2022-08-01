/**
A person enters the number of runs made on each ball by a batsman on a laptop by watching the cricket match in the stadium. 
If the runs made on a ball is -1, it means the player is out. 
The computer then prints the total runs made by the player and the program continues for the next player. 
The process continues till all the batsmen are out. 
Finally, it prints the total number of runs scored by the team. 
Write a program to the above task.
**/

#include <stdio.h>
#include <conio.h>

void main()
{
    int runs = 0;
    unsigned int player_runs = 0, team_runs = 0, count = 0;
    char innings = 'y';

    for (int i = 1; i <= 2; ++i)
    {
        printf("\n\t***** Team %c *****\n", i + 64);
        count = 1;

        do
        {
            printf("\nEnter runs: ");
            scanf("%d", &runs);

            // When a batsman is out
            if (runs < 0)
            {
                printf("\n\tPlayer %u made %u runs    \tScore of Team %c is %u runs\n", count, player_runs, i + 64, team_runs);
                player_runs = 0;
                count++;
            }
            else
            {
                player_runs += runs;
                team_runs += runs;
            }

            if (count <= 10)
            {
                printf("\nContinue Innings [Y/N]: ");
                scanf(" %c", &innings); // Add space before '%c' to avoid character '\n' in variable innings
            }

            if (innings == 'n' || innings == 'N')
            {
                printf("\n\tPlayer %u made %u* runs    \tScore of Team %c is %u runs\n", count, player_runs, i + 64, team_runs);
                break;
            }
        } while (count <= 10);

        printf("\n\tTeam %c has made %u runs\n", i + 64, team_runs);

        runs = 0;
        player_runs = 0;
        team_runs = 0;
        count = 0;
    }

    getch();
}