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
int a,n,d;
int aee1[1000001],aee2[1000001],x;
void answer()
{
    cin>>a>>n>>d;
    loop1 cin>>aee1[i];
    loop1 cin>>aee2[i];

    while(d--)
    {
        cin>>x;
        int pos=lower_bound(aee1+1,aee1+1+n,x)-aee1-1;
        int res=aee2[pos] + (x-aee1[pos]) *1.0 * (aee2[pos+1]-aee2[pos])/ (aee1[pos+1] -aee1[pos]);
        cout<<pos<<" ";
    }



}
int main()
{
    AMGR();
    tc
    answer();
}