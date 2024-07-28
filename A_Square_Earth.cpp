/*         +-- -- --++-- +- In the name of ALLAH, the lord of mercy, the giver of mercy. -+ --++-- -- --+          */
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
#define all(v) v.begin(),v.end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define lb lower_bound
#define ub upper_bound
#define pr pair<int,int>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define ponde cout<<res<<endl;
#define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
/*_________________________________________________________________________________________________________________________*/
void answer()
{
    int n, x1, x2, y1, y2, ans = 0;
    cin >> n >> x1 >> x2 >> y1 >> y2;

    if (x1 == x2 and (x1 == n or x1 == 0))
        ans = abs(y2 - y1);
    else if (y1 == y2 && (y1 == n || y1 == 0))
    {
        ans = abs(x1 - x2);
    }
    else if (x1 == 0 && x2 == n || x1 == n && x2 == 0)
    {
        ans = min(3 * n - y1 - y2, y1 + y2 + n);
    }
    else if (y1 == 0 && y2 == n || y1 == n && y2 == 0)
    {
        ans = min(3 * n - x1 - x2, x1 + x2 + n);
    }
    else if (x1 == 0 && y2 == 0)
    {
        ans = x2 + y1;
    }
    else if (x1 == n && y2 == n)
    {
        ans = 2 * n - x2 - y1;
    }
    else if (x1 == 0 && y2 == n)
    {
        ans = x2 + n - y1;
    }
    else if (x1 == n and y2 == 0)
    {
        ans = n - x2 + y1;
    }
    else if (x2 == 0 and y1 == 0)
    {
        ans = x1 + y2;
    }
    else if (x2 == n and y1 == n)
    {
        ans = 2 * n - x1 - y2;
    }
    else if (x2 == 0 and y1 == n)
    {
        ans = x1 + n - y2;
    }
    else if (x2 == n && y1 == 0)
    {
        ans = n - x1 + y2;
    }
    else ans=n+y1;
    cout<<ans<<endl;
}
int main()
{
    AMGR();
    //test(answer);
    answer();
}
/*_________________________________________________________________________________________________________________________*/
/*                  ++  --  ++  --  ++  cout<<"That's it. Keep coding:)"<<endl;  ++  --  ++  --  ++            */
/*                      "Don't quit. Suffer now and live the rest of your life as a champion."                 */
/*                                           "Speak good or be silent."                                        */