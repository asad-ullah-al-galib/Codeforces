
#include<stdio.h>
#define MOD 1000000007
long long factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1)) % MOD;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        printf("invilid\n");
        return 1;
    }
    printf("%d\n",factorial(n));
}
