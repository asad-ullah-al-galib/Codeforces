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
#define loop1 for(int i=4;i<=n;i++)
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
void answer()
{
    ni;
    cout<<"1 1"<<endl;
    cout<<n<<" "<< n <<endl;
    if(n==2)return;
    if(n==3)
    {
        cout<<"1 2"<<endl;
        return;
    }
    if(n==4)
    {
        cout<<"1 3"<<endl;
        cout<<"4 3"<<endl;
        return;
    }
   // cout<<"1 2"<<endl;
    //loop1 cout<<1<<" "<<i <<endl;
    for(int i=2;i<=n-2;i++)
    {
        cout<<1<<" "<<i<<endl;
    }
    cout<<2<< " "<<n<<endl;
    //cout<<endl;
}
int main()
{
    AMGR();
    tc
    answer();
}