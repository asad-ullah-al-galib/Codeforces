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
#define w(x) int x;cin>>x;while(x--)
#define ni int n;cin>>n;
#define nl ll n; cin>>n;
#define loop for(int i=0;i<n;i++)
#define loop1 for(int i=1;i<=n;i++)
#define str string s;cin>>s;
//#define test(t--) int t;cin>>t;while(t--)
#define array(arr) int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
#define vec(v) vector<int>v(n);for(int i=0;i<n;i++)cin>>v[i];
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define sb substr 
#define stl stol
#define lb lower_bound
#define ub upper_bound
#define pr pair<int,int>
#define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
ll cal(ll si, ll sl, char x) 
{
    if (x == '+') return si + sl;
    else return si * sl;
}

ll v(string s, int inx, int c) 
{
    if (c == 0) return stl(s.sb(inx));
    ll res = LLONG_MAX;
    int lomba=s.size();
    for (int x = inx; x < lomba - c; x++) 
    {
        
        
        ll si = stl(s.sb(inx, x - inx + 1));
        ll sl = v(s, x + 1, c - 1);



        
        res = min(res, cal(si, sl, '+'));
        res = min(res, cal(si, sl, '*'));
    }
    return res;
}
int main() {
    w(x)
    {
        ni;
        str(s);
        cout << v(s, 0, n - 2) << endl;
    }
}
          /*   ++  --  ++  --  ++  cout<<That's it. Keep coding:)<<endl;  ++  --  ++  --  ++     */