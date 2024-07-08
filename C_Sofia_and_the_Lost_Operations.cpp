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
//#define dhuka insert
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
    // int n;
    // cin>>n;
    // //vec(a);
    // vector<int>a(n);
    // loop
    // {
    //     cin>>a[i];
    // }
    // vector<int> b(n);
    // set<int> res;
    // loop 
    // {
    //     cin >> b[i];
    //     res.insert(b[i]);
    // }
    // // vector<int> req;
    // // loop
    // // {
    // //     if (a[i] != b[i])
    // //         req.pb(b[i]);
    // // }
    // multiset<int> req;
    // loop 
    // {
    //     if (a[i] != b[i])
    //         req.insert(b[i]);
    // }

    // int m;
    // cin >> m;
    // bool done =false;
    // for (int i = 0; i < m; ++i) 
    // {
    //     int x;
    //     cin >> x;
    //     auto ii = find(req.begin(), req.end(), x);
    //     if (ii != req.end()) 
    //     {
    //         req.erase(ii);
    //         if (i == m - 1)
    //             done = true;
    //     } else if (res.count(x)) 
    //     {
    //         if (i == m - 1)
    //             done = true;
    //     }
    // }

    // if (done and (req.size() == 0)) 
    // {
    //     cout << "YES"<<endl;
    // } else
    //     cout << "NO" << endl;



    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    vector<int> b(n);
    set<int> res;
    loop
    {
        cin >> b[i];
        res.insert(b[i]);
    }
    multiset<int> req;
    loop
    {
        if (a[i] != b[i])
            req.insert(b[i]);
    }

    int m;
    cin >> m;
    bool done = false;
    for (int i = 0; i < m; i++) 
    {
        int x;
        cin >> x;
        if (req.find(x) != req.end()) 
        {
            req.erase(req.find(x));
            if (i == m - 1)
                done = true;
        } else if (res.count(x)) 
        {
            if (i == m - 1)
                done = true;
        }
    }

    if (done and (req.size() == 0)) 
    {
        cout << "YES\n";
    } else
        cout << "NO\n";
}
int main()
{
    AMGR();
    test(answer);
}
/*   ++  --  ++  --  ++  cout<<That's it. Keep coding:)<<endl;  ++  --  ++  --  ++     */