#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(int x = n; x >= 0; x--)
    {
        for(int y = 1; y <= x; y++)
            printf("%d",y);
        printf("\n");
    }
}
