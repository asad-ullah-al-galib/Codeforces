// Bismillahir Rahmanir Raheem
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
#define loop for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int a=s1.length(),b=s2.length();

        if(s1==s2)
        {
            cout<<"="<<endl;
        }

        else if (s1[a-1]>s2[b-1] || s1[a-1]=='L' && s2[b-1]=='L' && a<b || s1[a-1]=='S' && s2[b-1]=='S'&& a>b)
        {
            cout<<"<"<<endl;
        }
        else 
        {
            cout<<">"<<endl;
        }
    }
}
 	 	   	      					  		