/*             +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+             */
/**
* author:TheAnonymousAMGR
**/
/* CSTE */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
#define loop1 for(ll i=1;i<=n;i++)
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
    ll n, k;
    cin >> n >> k;
    vector<ll> notun;

    // sum of notun 
    ll res = 0;
   loop1
     {
        // Calculate differences
        res += abs(i - (n - i + 1));
        notun.pb(i);
    }
    if (k&1 || res < k) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        ll idx = 0;
        ll nu = n;

        while ((nu - 1) * 2 < k) {
            swap(notun[idx], notun[n - idx - 1]);  // Swap the elements
            k -= (nu - 1) * 2;
            nu -= 2;
            idx++;
        }

        k /= 2;
        swap(notun[idx], notun[idx + k]); 
        ll nn=notun.size(); 
        for (auto i = 0; i < nn; i++) {
            cout << notun[i] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    AMGR();
    test(answer);
}
          /*   ++  --  ++  --  ++  cout<<That's it. Keep coding:)<<endl;  ++  --  ++  --  ++     */