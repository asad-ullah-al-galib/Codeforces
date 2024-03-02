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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr1[n],arr2[m];
        loop cin>>arr1[i];
        for(int i=0;i<m;i++) cin>>arr2[i];
        sort(arr1,arr1+n);
        sort(arr2,arr2+m,greater<int>());
        ll res=0;
        for(int i=0;i<n;i++)res+=max(abs(arr1[i]-arr2[m-n+i]),abs(arr1[i]-arr2[i]));
        cout<<res<<endl;
    }
}