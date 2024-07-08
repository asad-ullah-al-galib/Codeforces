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
    int n;
    cin>>n;
    // if(n==2) cout<<(n*7)-1;
    // else if (n==1) cout<<"1";
    // else if(n==4) cout<<"73"<<endl;
    // else cout<<37<<endl;
    int res=1;
    // switch (n) 
    // {
    // case 1:
    //     cout << "1";
    //     break;
    // case 2:
    //     cout << (n * 7) - 1;
    //     break;
    // case 3:
    //     cout << "37";
    //     break;
    // default:
    //     for(int i=2;i<n;i++)
    //     {
    //         res+=12*(i-1);
    //     }
    //     cout<<res<<endl;
    //     break;
    // }
    for(int i=2;i<=n;i++)
    {
            res+=12*(i-1);
    }
    cout<<res<<endl;
}
int main()
{
    AMGR();
    //test(answer);
    answer();
}
          /*   ++  --  ++  --  ++  cout<<That's it. Keep coding:)<<endl;  ++  --  ++  --  ++     */


/*  
    when input is 1, answer 1
    when input is 2, answer 13
    when input is 3, answer 37
    when input is 4, answer 73
    when input is 5, answer 121 


    solution: res=1;
    here I see there is relation with 12

    loop from 2
    and res+=12*(i-1);

    ** that's the answer, hehehehehehehe
*/