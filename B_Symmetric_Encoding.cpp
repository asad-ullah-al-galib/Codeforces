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
void answer()
{
    // int n;
    //     cin >> n;
    //     string soja;
    //     cin >> soja;

    //     string ulta = "";
    //     for(char c : soja) {
    //         if(ulta.find(c) == string::npos)
    //         {
    //             ulta += c;
    //         }
    //     }

    //     srt(ulta);
    //     int len = ulta.length();
    //     for(int i = 0; i < n; i++) 
    //     {
    //         soja[i] = ulta[len - 1 - (ulta.find(soja[i]))];
    //     }

    //     cout << soja << endl;
    int n;
    cin>>n;
    string s,r;
    cin>>s;
    set<char>Set;

    for(auto c:s)
    {
        Set.insert(c);
    }
    for(auto c: Set)
    {
        r+=c;
    }

    unordered_map<char,char>mp;
    int nn=r.size();
    //mp[r[(n+1)/2]]=r[(n+1)/2];

    for(int i=0;i<nn;i++)
    {
        mp[r[i]]=r[(nn-1)-i];
    }

    for(int i=0;i<s.size();i++)
    {
        s[i]=mp[s[i]];
    }
    cout<<s<<endl;

}
int main()
{
    AMGR();
    tc
    answer();
}
/*                    cout<<That's it. Keep coding:)<<endl;                      */
