#include<stdio.h>
#define MOD 100000007;

long long fac(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (n*fac(n-1))%MOD;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        printf("Invalid\n");
        return 1;
    }
    printf("%d\n",fac(n));
}
