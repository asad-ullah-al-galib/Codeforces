#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int r,me=0,U=0,us=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&r);
        me+=r;
    }
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&r);
        U+=r;
    }
    for(int i=0;i<n-2;i++)
    {
        scanf("%d",&r);
        us+=r;
    }
    printf("%d\n",me-U);
    printf("%d\n",U-us);
}
