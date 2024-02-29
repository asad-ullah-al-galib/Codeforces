
#include<stdio.h>
void fibonacci(int n)
{
    long long int t1=0,t2=1,nextterm;
    for(int i=1;i<=n;i++)
    {
        printf("%lld, ",t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
}
int main()
{
    fibonacci(20);
}
