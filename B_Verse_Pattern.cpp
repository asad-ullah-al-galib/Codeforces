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
//const int N=1100;
// bool vowel(char c)
// {
//     return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y';
// }

int main()
{
    // AMGR();
    // ni;
    // int v[N];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>v[i];
    // }
    // str(s);
    // loop
    // {
    //     cin>>s;
    //     for (char c : s)
	// 		if (vowel(c))
	// 			v[i]--;
	// 	if (v[i] != 0)
	// 	{
	// 		cout << "NO"<<endl;
	// 		return 0;
	// 	}
    // }
    // cout<<"YES"<<endl;
    // return 0;
    ni;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    string s;
    getline(cin,s);
    loop 
    {
        getline(cin,s);
        int count =0;
        for(char j : s) if(j=='a' || j=='e' || j=='i' || j=='o' || j=='u' || j=='y') count++;
        if(count != v[i]) 
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}