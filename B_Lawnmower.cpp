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
#define loop1 for(int i=1;i<n;i++)
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
int main()
{
    AMGR();
    //tc
    int n, m;
    cin >> n >> m;
    int first[2100];
    int last[2100];
    for (int i = 0; i < 2100; i++)
    {
        first[i] = -1;
        last[i] = -1;
    }
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < m; b++)
        {
            char tem;
            cin >> tem;
            if (tem == 'W')
            {
                if (first[a] == -1)
                    first[a] = b;
                last[a] = b;
            }
        }
    }
    for (int i = 1; i < n; i+=2)
        swap (first[i], last[i]);
    int prev = 0;
    int tot = 0;
    int final=0;
    for (int i = 0; i < n; i++)
    {
        if (first[i] == -1)
            continue;
            final=i;
        ///if (prev != -1)
            tot += abs (first[i] - prev);
        tot += abs (last[i] - first[i]);
        prev = last[i];
    }
    cout << tot + final << endl;
}