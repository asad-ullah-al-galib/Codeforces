
#include<stdio.h>

int sum(int n)
{
    int res=0;
    while(n!=0)
    {
        res+=n%10;
        n/=10;
    }
    //return res;
    printf("%d",res);
}
int main()
{
    int num;
    scanf("%d",&num);
    sum(num);
}
