#include<stdio.h>

void fibonacci(int n)
{
    long long int t1=0,t2=1,res;
    for(int i=1;i<=n;i++)
    {
        printf("%lld ",t1);
        res=t1+t2;
        t1=t2;
        t2=res;
    }
}
int main()
{
    fibonacci(20);
}
