#include<stdio.h>
#include<math.h>
int prime (int a)
{
    if(a<2)
    {
        return 0;
    }
    for(int i=2; i*i<=a; i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;

}
int main()
{
        int n;
        scanf("%d",&n);
        for (int i=1; i<=n; i++)
        {
            if (prime(i))
            {
                printf("%d ",i);
            }
        }
}

