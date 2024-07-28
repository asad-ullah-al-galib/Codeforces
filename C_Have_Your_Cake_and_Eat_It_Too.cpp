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
const int N=2e5+20;
ll n,v[3][N];
ll res,bob[3],alice[3];
void answer()
{
    res=0;
    cin>>n;
    for(ll i=0;i<3;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>v[j][i];
            if(not i) res+=v[i][j];
        }
    }
    iota(bob,bob+3,0); // start to 0 and increase element by 1

    bool f=0;

    do 
    {
        ll cur=0,ptr=0,sum=0;
        vector<ll>vv;
        while(ptr<n)
        {
            sum+=v[bob[cur]][ptr];
            if(sum*3>=res)
            {
                vv.pb(ptr);
                cur++;
                sum=0;
            }
            if(cur==0)break;
            ptr++;
        }
        if (cur == 3) 
        {
				vv[2] = n - 1;
				ll last = 0;
				for (ll i = 0; i < 3; i++) 
                {
					alice[2 * bob[i]] = last;
					alice[2 * bob[i] + 1] = vv[i];
					last = vv[i] + 1;
				}
 
				for (ll i = 0; i < 6; i++) cout << alice[i] + 1 << ' ';
				cout << '\n';
 
				f = true;
				break;
		}
    }
    while(next_permutation(bob,bob+3));
    if(!f) cout<<"-1"<<endl;
}
int main()
{
    AMGR();
    test(answer);
}
/*_________________________________________________________________________________________________________________________*/
/*                  ++  --  ++  --  ++  cout<<"That's it. Keep coding:)"<<endl;  ++  --  ++  --  ++            */
/*                      "Don't quit. Suffer now and live the rest of your life as a champion."                 */
/*                                           "Speak good or be silent."                                        */