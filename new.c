#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10; //number of rows
    for (int i = 1; i <= n; i++) //outer loop for lines
    {
        for (int j = 1; j <= n; j++) //inner loop for characters
        {
            if (i == j || i + j == n + 1) //condition for star
            {
                printf("*");
            }
            else if (i == 1 && j == n / 2 + 1) //condition for I
            {
                printf("I");
            }
            else if (i == 2 && j == n / 2) //condition for L
            {
                printf("L");
            }
            else if ((i == j || i + j == n / 2 + 4) && i == n / 2 + 2) //condition for O
            {
                printf("O");
            }
            else if ((j == n / 2 - 1 || j == n / 2 + 3) && i == n / 2 + 3) //condition for V
            {
                printf("V");
            }
            else if ((j == n / 2 - 2 || j == n / 2 || j == n / 2 + 4) && i == n / 2 + 4) //condition for E
            {
                printf("E");
            }
            else if ((j == n / 2 - 3 || j == n / 2 + 1 || j == n / 2 + 5) && i == n / 2 + 5) //condition for Y
            {
                printf("Y");
            }
            else if ((j == n / 2 - 4 || (j >= n / 2 + 2 && j <= n / 2 +6)) && i == n / 2 + 6) //condition for U
            {
                printf("U");
            }
            else //condition for space
            {
                printf(" ");
            }
        }
        printf("\n"); //new line
    }
    return 0;
}
