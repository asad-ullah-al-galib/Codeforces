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
void answer()
{
    int n;
        cin>>n;
        string str;
        cin>>str;
        int pos=0,neg=0;
        for(int i=0;i<n;i++)
        {
             if(str[i]=='R')pos++;
             if(str[i]=='U')neg++;
             if(str[i]=='D')neg--;
             if(str[i]=='L')pos--;
             if(pos==1 && neg==1)
             {
                cout<<"YES"<<"\n";
                return;
             }
        }
        cout<<"NO"<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        answer();
    }
}