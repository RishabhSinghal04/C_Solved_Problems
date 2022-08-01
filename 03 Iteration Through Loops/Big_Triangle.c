/*
         *
        * *
       * * *
      * * * *
     * * * * *
    *         *
   * *       * *
  * * *     * * *
 * * * *   * * * *
* * * * * * * * * *

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int n, a = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n); // Let n=5

    /* Loop from -5 to 5
    Always be odd number of rows : -5 -4 -3 -2 -1 0 1 2 4 5
    Total number of rows are 11
    */
    for (int i = -n; i <= n; i++) // for row (horizontal, left to right)
    {
        if (i == 0) // Do nothing just continue to the next iteration
            continue;
        else
        {
            for (int k = a; k < n * 2; k++) // to print space before every row of star but not the last one
                printf(" ");

            if (i > 0) // to print lower part of the triangle
            {
                for (int j = 1; j <= i; j++) // to print left part
                    printf("* ");
                for (int m = i; m < n + n - i; m++)
                    printf(" "); // to print space between the stars as shown in the figure above
                for (int l = 1; l <= i; l++)
                    printf("* "); // to print right part
            }
            else // to print upper part of the triangle
            {
                for (int j = n; j >= abs(i); j--)
                    printf("* ");
            }
            a++;
            printf("\n"); // next row
        }
    }
    getch();
}