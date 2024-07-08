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
        int tc;
        cin>>tc;
        // continue keno loop chara kaj kore na?
        while(tc--)
        { 
        ni;
        vec(a);
        vector<int> b(n - 1);
        for(int i = 0; i < n - 1; i++)
            b[i] = gcd(a[i], a[i + 1]);

        int idx = -1;
        for(int i = 0; i < n - 2; i++) {
            if(b[i] > b[i + 1]) {
                idx = i;
                break;
            }
        }

        if(idx == -1) {
            cout << "YES" << endl;
            continue;
        }

        vector<int> a1, a2, a3;
        loop 
        {
            if(i != idx + 1) a1.pb(a[i]);
            if(i != idx + 2) a2.pb(a[i]);
            if(i != idx) a3.pb(a[i]);
        }

        vector<int> b1(n - 2), b2(n - 2), b3(n - 2);
        for(int i = 0; i < n - 2; i++) {
            b1[i] = gcd(a1[i], a1[i + 1]);
            b2[i] = gcd(a2[i], a2[i + 1]);
            b3[i] = gcd(a3[i], a3[i + 1]);
        }

        bool f = 1, ff = 1, fff = 1;
        for(int i = 0; i < n - 3; i++) {
            if(b1[i] > b1[i + 1]) f = 0;
            if(b2[i] > b2[i + 1]) ff = 0;
            if(b3[i] > b3[i + 1]) fff = 0;
        }

        if(!(f or ff or fff))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        }
}
int main()
{
    AMGR();
    //test(answer);
    answer();
}
/*   ++  --  ++  --  ++  cout<<That's it. Keep coding:)<<endl;  ++  --  ++  --  ++     */