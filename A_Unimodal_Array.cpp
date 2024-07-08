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
int answer()
{
    int x = 0;
    int N;
    int a, b;
    int P = 0;
    bool increasing = false;
    bool equal = false;
    bool decreasing = false;
    int ans = 0;
    cin >> N;
    if (N > 2)
    {

        cin >> a >> b;
        if (a > b)
        {
            decreasing = true;
        }
        if (a == b)
        {
            equal = true;
        }
        if (a < b)
        {
            increasing = true;
        }
        P = b;
        for (int i = 2; i < N; i++)
        {
            cin >> x;
            if (x > P)
            {
                if (increasing == 0)
                {
                    ans = 1;
                    break;
                }
            }
            else if (x == P)
            {
                if (increasing)
                {
                    increasing = false;
                    equal = true;
                }
                else if (decreasing)
                {
                    ans = 1;
                    break;
                }
            }
            else if (x < P)
            {
                if (increasing)
                {
                    increasing = false;
                    decreasing = true;
                }
                else if (equal)
                {
                    decreasing = true;
                    equal = false;
                }
            }
            P = x;
        }
        if (ans == 0)
        {
            cout << "YES";
        }
        if (ans == 1)
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "YES";
    }
}
int main()
{
    AMGR();
    //test(answer);
    answer;
}
/*   ++  --  ++  --  ++  cout<<That's it. Keep coding:)<<endl;  ++  --  ++  --  ++     */