#include <stdio.h>
#define max 50
int main()
{
    int a[max][max], b[max][max], products[max][max];
    int arows, acolumns, brows, bcolumns;
    int sum;
    // part1
    printf("Enter the rows & columns of matrix a: ");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter the elements of matrix a:\n");
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // part2
    printf("Enter the rows & columns of the matrix b: ");
    scanf("%d %d", &brows, &bcolumns);
    if (brows != acolumns)
    {
        printf("Sorry! we cannot multiply these matrices a and b");
    }
    else
    {
        printf("Enter the elements of matrix b: \n");
        for (int i = 0; i < brows; i++)
        {
            for (int j = 0; j < bcolumns; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
    }

    printf("\n");
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            sum=0;
            for (int k = 0; k < brows; k++)
            {
                sum += a[i][k] * b[k][j];
                products[i][j]=sum;
            }
        }
    }
    // part3
    printf("Resultent matrix: \n");
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            printf("%d ", products[i][j]);
        }
        printf("\n");
    }
}
