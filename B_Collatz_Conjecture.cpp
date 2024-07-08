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
// void answer()
// {
// } 
ll answer(ll a, ll b, ll c) 
{
    ll d = a % b;
    d = b - d;
    
    if (c < d) 
    {
        return a + c;
    }
    if (c == d) 
    {
        a += c;
        // amar heda motherchod
        while (a%b==0) 
        {
            a= a/b;
        }
        return a;
    }

    while (1) 
    {
        ll e = d;
        if (a == 1) 
        {
            break;
        }


        if (c >= e) 
        {
            c -= e;
            a = a+ e;
            //ll res=a%b;
            //while (((a%b)|1)>a%b) 
            while(a%b==0)
            {
                a = a/b;
            }
            d = b - a % b;
        } 


        else 
        {
            a += c;
            c = 0;
            break;
        }
    }

    if (c != 0) 
    {
        return c % (b - 1) + 1;
    }
    return a;
}
int main()
{
    AMGR();
    //test(answer);
    ni;

    while (n--) 
    {
        ll a, b, c;
        cin >> a >> b >> c;

        cout << answer(a, b, c) << endl;
        
    }
}
          /*   ++  --  ++  --  ++  cout<<That's it. Keep coding:)<<endl;  ++  --  ++  --  ++     */