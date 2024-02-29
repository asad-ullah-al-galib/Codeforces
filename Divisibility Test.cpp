#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long a=1;
        bool f=false;
        for(int i=1; i<=m; i++)
        {
            a=a*n%m;
            if(a==0)
            {
                cout<<1<<" "<<i<<endl;
                f=true;
                break;
            }
            if(a==1)
            {
                cout<<2<<" "<<i<<endl;
                f=true;
                break;
            }
            if(a==m-1)
            {
                cout<<3<<" "<<i<<endl;
                f=true;
                break;
            }
        }
        if(f==0) cout<<0<<endl;
    }
}
