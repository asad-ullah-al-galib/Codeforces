#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//ll max(ll num1, ll num2);
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        ll n;
        scanf("%lld",&n);
        ll arr[n],att[n];
        ll me=10000000000,u=100000000000;
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            /*if(me>arr[i])
            {
                me=arr[i];
            }
            else
            {
                me=me;
            }
            */
            me=min(me,arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&att[i]);
            u=min(u,att[i]);
            /*if(u>att[i])
            {
                u=att[i];
            }
            else
            {
                u=u;
            }
            */
        }
        ll sum=0;
        for(int ok=0;ok<n;ok++)
        {
            /*ll num1=arr[ok]-me;
            ll num2=att[ok]-u;
            sum+= max(num1, num2);
            */
            sum=sum+max(arr[ok]-me,att[ok]-u);
        }
        printf("%lld",sum);
        printf("\n");
    }
}
/*ll max(ll num1, ll num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
*/
