// Bismillahir Rahmanir Raheem
/**
* author:TheAnonymousAMGR
**/
//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define loop for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
// int main()
// {
//     //cout<<2<<endl<<2<<endl<<5<<endl<<0<<endl<<2;

//     //contest er putki mari

// }
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    bool in=false,dos=true;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            c++;
            dos=false;
            if(c==3)
            {
                in=true;
            }
        }
        else
        {
            c=0;
        }
    }
    if(dos)
    {
        cout<<0<<endl;
    }
    else if(in)
    {
        cout<<2<<endl;
    }
    else
    {
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=(s[i]=='.');
        }
        cout<<res<<endl;
    }
}
int main()
{
    int t; cin>>t;
    w(t)
    solve();
}