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
int round_up(int n) 
{
    return (n % 2 == 0) ? n : n + 1;
}
void answer()
{
    string s,ss;
    cin>>s>>ss;
     int res=count(s.begin(),s.end(),'1');
     int ress=count(ss.begin(),ss.end(),'1');
    // int cnt=count(s.begin(),s.end(),'0');
    // int cntt=count(ss.begin(),ss.end(),'0');

    // //if(cnt==0 or cntt==0) yes
    // if (res>=ress) yes
    // else if ((cnt==0 && cntt=0) and (ress>res)) no
    // else no  
    // if (res >= ress)
    //     cout << "YES" << endl;
    // //else if ((cnt == 0 && cntt == 0) && (ress > res))
    //     //cout << "NO" << endl;
    // else
    //     cout << "NO" << endl;
    // if (round_up(res >= ress)) yes
    // else no
    //cout << ((round_up(s.find('1')) >= ss.find('1')) ? "YES" : "NO") <<endl;
    res+=res&1;
    if(res>=ress) yes
    else no
}
int main()
{
    AMGR();
    //test(answer);
    answer();
}
/*_________________________________________________________________________________________________________________________*/
/*                  ++  --  ++  --  ++  cout<<"That's it. Keep coding:)"<<endl;  ++  --  ++  --  ++            */
/*                      "Don't quit. Suffer now and live the rest of your life as a champion."                 */
/*                                           "Speak good or be silent."                                        */