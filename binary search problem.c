#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int a,b,c;
    for(int i=0; i<n; i++)
    {
        a=ara[i];
        for(int j=i+1; j<n; j++)
        {
            b=ara[j];
            if(!(a<b))continue;
            for(int k=j+1; k<n; k++)
            {

                c=ara[k];
                if(!(b<c))
                {
                    continue;
                }
                else
                {
                    printf("%d %d %d",a,b,c);
                    printf("\n");
                }
            }
        }
    }
}
