#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[200];
        a[0]=1;
        int res=1;
        for(int i=1; i<=n; i++)
        {
            int temp=0;
            for(int j=0; j<res; j++)
            {
                int x=i*a[j]+temp;
                a[j]=x%10;
                temp=x/10;
            }
            while(temp>0)
            {
                a[res++]=temp%10;
                temp/=10;
            }
        }
        for(int i=res-1; i>=0; i--)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
