#include<stdio.h>
int main()
{
/*int ok;
    scanf("%d",&ok);
    int arr[]={1,2,6,20,70,252,924,3432,12870,48620};
    printf("%d",arr[ok-1]);
    */
    int n;
    scanf("%d",&n);
    int u=1;
    int me=1;
    for(int i=1;i<n;i++)
    {
        u*=i;
        me*=(n-1+i);
    }
    int ans=me/u;
    printf("%d",ans);
}
