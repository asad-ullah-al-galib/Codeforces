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
void solve()
{
    int n; cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int a; cin>>a;
        m[a]=i+1;
    }
    int c=0;
    for(auto it:m)
    {
        int temp=it.first;
        if(temp==it.second)c++;
    }
    cout<<((c*(c-1))/2)<<endl;
}
int main()
{
    int t; cin>>t;
    w(t)
    solve();
}
