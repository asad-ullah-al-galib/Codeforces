/*             +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+             */
/**
* author:TheAnonymousAMGR
**/
/* CSTE */
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
#define ni int n;cin>>n;
#define nl ll n; cin>>n;
#define loop for(int i=0;i<n;i++)
#define loop1 for(int i=1;i<=n;i++)
#define str string s;cin>>s;
#define test(fn) int t;cin>>t;while(t--) fn();
#define array(arr) int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
#define vec(v) vector<int>v(n);for(int i=0;i<n;i++)cin>>v[i];
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define lb lower_bound
#define ub upper_bound
#define pr pair<int,int>
#define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void answer()
{
    int n;
    cin>>n;
    vector<ll>v(n);
    loop cin>>v[i];
    int res=0;

    bool flag=0;
    // for(int i=1;i<n-1;i++)
    // {
    //     if(v[i]<v[i+1] and v[i]<v[i-1])
    //     {
    //         flag =1; break;
    //     }

    // }
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            res++;
        }
    }
    
    if(res>=2) {cout<<"No"<<endl; return;}
    else if(res==1 and v[n-1]>v[0])
    {
        cout<<"No"<<endl;
    } 
    else cout<<"Yes"<<endl;
}
int main()
{
    AMGR();
    test(answer);
}
/*   ++  --  ++  --  ++  cout<<That's it. Keep coding:)<<endl;  ++  --  ++  --  ++     */