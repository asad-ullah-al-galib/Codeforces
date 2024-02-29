//Coded by TheAnonymousAMGR
#include<stdio.h>
int main ()
{
    int n,a,b,s=0,m=0;
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        s=b-a+s;
        if (m<s)
        {
            m=s;
        }
    }
    printf("%d",m);
}
