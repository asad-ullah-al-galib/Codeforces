#include<stdio.h>
int main ()
{
    int temp,n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&temp);
        arr[temp]=i;
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}
