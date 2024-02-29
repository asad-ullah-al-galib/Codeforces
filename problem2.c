#include<stdio.h>
int main ()
{
    int n,temp;
    scanf("%d",&n);
    double arr1[n+1];
    double arr2[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&arr1[i]);
    }
    for(int j=0;j<n;j++)
    {
        scanf("%lf",&arr2[j]);
    }
    for(int k=0;k<n;k++)
    {
        if(arr1[k]==0)
        {
            printf("zero ");
        }
        else if (arr2[k]==0)
        {
            printf("Infinity");
        }
        else{
            if((k+1)%2==0)
            {
                temp=ceil(arr1[k]/arr2[k]);
                printf("%lf ",temp);
            }
            else{
                printf("%lf ",floor(arr1[k]/arr2[k]));
            }
        }
    }

}
