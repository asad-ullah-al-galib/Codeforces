#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int me,U,n,j;
    scanf("%lld",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%lld",&me);
        U=sqrt(me);
        for(int j=2; j*j<U; j++)
            if(me%j==0)
            {
                break;
            }
        if(j*j>U&&U*U==me&&me>1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
