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

// int jogfol(string n) {
//     int res = 0;
//     for (char c : n) {
//         res += c - '0';
//     }
//     return res;
// }
void answer()
{
    //b
//     int n,pola,dol;
//     cin>>n>>pola>>dol;
//     int maiya=n-pola;

//     int res=pola%dol;
//     int ress=maiya%dol;

//     cout<<abs(ress-res)<<endl;
//c
//  string S, T;
//     cin >> S >> T;
//     vector<int> pos;
//     int j = 0;
//     int n=T.size();
//     int nn=S.size();
//     loop {
//         if (T[i] == S[j]) {
//             pos.pb(i + 1);
//             j++;
//         }
//         if (j == nn) break;
//     }
//     for (int i = 0; i < pos.size(); i++) {
//         cout << pos[i] << " ";
//     }

//d
// string n;
// cin >> n;
// int count = 0;
// while (n.length() > 1) 
// {
//     n = to_string(jogfol(n));
//     count++;
// }
// cout << count << endl;
// }
ll eka,gay,gayy;
cin>>eka>>gay>>gayy;
ll n=gay/3;ll nn=eka;
nn+=n;
gay-=(n*3);
if((gayy+gay) <3 && gay!=0)
{
    cout<<-1<<endl;
    return;
}
nn+=(ceil((gayy+gay)/3.0));cout<<nn<<endl;
}
int main()
{
    AMGR();
    tc
    answer();
}