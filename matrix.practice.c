#include<stdio.h>
#define max 50
int main ()
{
    int a[max][max],b[max][max],products[max][max];
    int arows,brows,acolumns,bcolumns;
    int sum;
    printf("Enter the row and column of matrix a: ");
    scanf("%d %d",&arows,&acolumns);

    printf("Enter the element of matrix a:\n ");
    for (int i=0; i<arows; i++)
    {
        for (int j=0; j<acolumns; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the rows and columns of matrix b: ");
    scanf("%d %d",&brows,&bcolumns);
    if (brows!= acolumns)
    {
        printf("Sorry! we cannot multiply these matrices");
    }
    else
    {
        printf("Enter the element of matrix b: \n");
        for (int i=0; i<brows; i++)
        {
            for (int j=0; j<bcolumns; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    }
    printf("\n");
    for (int i=0; i<arows; i++)
    {
        for (int j=0; j<bcolumns; j++)
        {

            sum=0;
            for (int k=0; k<brows; k++)
            {

                sum+=a[i][k]*b[k][j];
                products[i][j]=sum;
            }

        }

    }
    printf("Resultent matrix: \n");
    for (int i=0;i<arows;i++)
    {
        for(int j=0;j<bcolumns;j++)
        {
            printf("%d ",products[i][j]);
        }
        printf("\n");
    }
}
