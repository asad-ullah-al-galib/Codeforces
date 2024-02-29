#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    if(!(is_sorted(v.begin(),v.end())))
    {
        cout<<"0"<<endl;
        return;
    }
    vector<ll>d;
    for(ll i=1; i<n; i++)
    {
        ll dif=v[i]-v[i-1];
        d.push_back(dif);
    }
    ll m=d[0];
    for(ll i=0;i<d.size();i++)
    {
        if(m>d[i])
        {
            m=d[i];
        }
    }
    ll lowerindex;

}
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }

}
