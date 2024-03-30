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
string names[60];
void answer()
{
    int max = -1 * MOD;
    int loc = -1;
    int n;
    cin >> n;
    for (int a = 0; a < n; a++)
    {
        int temp, res = 0;
        cin >> names[a];
        cin >> temp;
        res += 100 * temp;
        cin >> temp;
        res -= 50 * temp;
        for (int b = 0; b < 5; b++)
        {
            cin >> temp;
            res += temp;
        }
        if (res > max)
        {
            max = res;
            loc = a; 
        }
    }
    if(loc==-1)
    while(true);
    cout << names[loc] << endl;
}
int main()
{
    AMGR();
    //tc
    answer();
}