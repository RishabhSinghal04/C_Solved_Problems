
#include <stdio.h>
#include <conio.h>

void Tower_Hanoi(short, char, char, char);

void main()
{
    unsigned short num_disk;
    char source = 'A', auxillary = 'B', destination = 'C';  // The three towers of hanoi to hold disks

    printf("Enter total number of disk: ");
    scanf("%hu", &num_disk);

    Tower_Hanoi(num_disk, source, auxillary, destination);

    getch();
}

void Tower_Hanoi(short n, char source, char auxillary, char destination)
{
    if (n == 1)
    {
        // Move 1 disk from source tower to destination tower
        printf("\nMove disk %hu from %c to %c", n, source, destination);
        return;
    }

    Tower_Hanoi(n - 1, source, destination, auxillary); // Move n - 1 disk from source tower to auxillary tower with the help of destination tower
    printf("\nMove disk %hu from %c to %c", n, source, destination);
    Tower_Hanoi(n - 1, auxillary, source, destination); // Move n - 1 disk from auxillary tower to destination tower with the help of source tower
}