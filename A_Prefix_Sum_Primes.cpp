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
int res,ress;
void answer()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
		int a;
		cin>>a;
		if(a==1)
        {
			res++;
		}
        else
        {
			ress++;
		}
	}
	if(!res)
    {
		loop1
        {
			printf("2 ");
		}
	}
    else if(!ress)
    {
		loop1
        {
			printf("1 ");
		}
	}
    else
    {
		printf("2 1 ");
		for(int i=1;i<=ress-1;i++)
        {
			printf("2 ");
		}
		for(int i=1;i<=res-1;i++)
        {
			printf("1 ");
		}
	}
}
int main()
{
    // AMGR();
    //test(answer);
    answer();
}
/*_________________________________________________________________________________________________________________________*/
/*                  ++  --  ++  --  ++  cout<<"That's it. Keep coding:)"<<endl;  ++  --  ++  --  ++            */
/*                      "Don't quit. Suffer now and live the rest of your life as a champion."                 */
/*                                           "Speak good or be silent."                                        */