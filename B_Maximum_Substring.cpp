//             +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+
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
#define ni int n;cin>>n;
#define nl ll n; cin>>n;
#define loop for(int i=0;i<n;i++)
#define loop1 for(int i=1;i<=n;i++)
#define str string s;cin>>s;
#define tc int tc;cin>>tc;while(tc--)
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
int cost(int x, int y) {
if (x > 0 && y > 0) return x * y;
if (x > 0 && y == 0) return x * x;
return y * y;
}
void answer()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
      x += (s[i] == '0');
      y += (s[i] == '1');
    }
    int sol = cost(x, y);
    int l = 0;
    //int m=0;
    while (l < n) {
    int r = l;
    while (r + 1 < n && s[r + 1] == s[r])
    {
        r++;
    }
      sol = max(sol, cost(r - l + 1, 0));
      l = r + 1;
    }
    cout << sol << endl;
}
int main()
{
    AMGR();
    tc
    answer();
}
/*                    cout<<That's it. Keep coding:)<<endl;                      */