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
void answer()
{
    int n;
    cin >> n;
    vector <string> rat;
    vector <string> wc;
    vector <string> man;
    string captain;
    string r = "rat";
    string w = "woman";
    string c = "child";
    string m = "man";
    string cap = "captain";
    string temp, temp2;
    for (int a = 0; a < n; a++)
    {
        cin >> temp >> temp2;
        if (temp2 == r)
           rat.push_back (temp);
        if (temp2 == w || temp2 == c)
           wc.push_back (temp);
        if (temp2 == m)
           man.push_back (temp);
        if (temp2 == cap)
           captain = temp;
    }
    for (int a = 0; a < rat.size(); a++)
        cout << rat[a] << endl;
    for (int a = 0; a < wc.size(); a++)
        cout << wc[a] << endl;
    for (int a = 0; a < man.size(); a++)
        cout << man[a] << endl;
    cout << captain;
}
int main()
{
    AMGR();
    //tc
    answer();
}