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
ll tri[100100];
int main()
{
    // for(int i=0;i<100000;i++)
    // {
    //     tri[i]=((ll)i * ((ll)i-1))/2;
    // }
    // ll n;
    // cin;
    // for(int i=0;i<100000;i++)
    // {
    //     int low=0,high=99999;
    //     while(low <high)
    //     {
    //         int mid = (low+high)/2;
    //         if(tri[i]+tri[mid] < n)
    //         {
    //             low=mid+1;
    //         }
    //         else high=mid;
    //     }
    //     if(tri[i] + tri[low] == n)
    //     {
    //         cout<<"YES"<<endl;
    //         return 0;
    //     }
    // }
    // cout<<"NO"<<endl;
    // return 0;
    int n;
    cin>>n;
    bool flag=0;
    int res=0;
    for(int i=1;i<n;i++)
    {
        res+=i;
        if(res<n)
        {
            int ress=n-res;
            ress*=2;
            int resss=sqrt(ress);
            if(resss*(resss+1)==ress) flag=1;
        }
        else break;
    }
    cout<<(flag? "YES" : "NO");
}